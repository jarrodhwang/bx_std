/*
* Box.cpp
*
* Description : Implementation of Box class, it contains Box IP address, factory num, box numbers,
*
* 설명 : 박스 클래스
*		박스의 url, ip 주소, 공장 번호, 빈 개수 및 정보
*
* Author : Seongjae Hwang, 황성재
* Date : 05. May. 2023, 2023년 05월 05일
*/
#include "Box.h"
#include "Bin.h"
#include <string>
#include <vector>


Box::Box() {}

Box::Box(const string& ip_addr,
    const int& port,
    const vector<int>& bin_ids,
    const int& boxID,
    const int& factoryID,
    const string& factoryName)
{
    this->ip_addr = ip_addr;
    this->bin_ids = bin_ids;
    this->boxID = boxID;
    this->factoryID = factoryID;
    this->factoryName = factoryName;
}
//Destructor
Box::~Box() {}
//Getter and Setter
string Box::getIpAddress() const { return this->ip_addr; }
int Box::getPort() const { return this->port; }
vector<int> Box::getBinIDs() const { return this->bin_ids; }
int Box::getBoxID() const { return this->boxID; }
int Box::getFactoryID() const { return this->factoryID; }
string Box::getFactoryName() const { return this->factoryName; }

bool Box::setIpAddress(const string& ip_addr) 
{
    if (IsValidIpAddress(ip_addr))
    {
        this->ip_addr = ip_addr;
        return true;
    }
    else
        return false;
}
bool Box::setPort(const int& port) 
{
    this->port = port;
    return true;
}
bool Box::setBinIds(const vector<int>& bin_ids) 
{
    this->bin_ids = bin_ids;
    return true;
}
bool Box::setBoxID(const int& boxID) 
{
    this->boxID = boxID;
    return true;
}
bool Box::setFactoryID(const int& facID)
{
    this->factoryID = facID;
    return true;
}
bool Box::setFactoryName(const string& fac_n)
{
    this->factoryName = fac_n;
    return true;
}

//Functions
bool Box::IsValidIpAddress(const string& ip) 
{
    return true;

}
bool Box::AddBin(const int& binID)
{
    return true;
}
bool Box::AddBins(const vector<int>& binIDs)
{
    return true;
}
int Box::countBins()
{
    return bin_ids.size();
}
int Box::findBinID(const int& binID)
{
    auto it = find(bin_ids.begin(), bin_ids.end(), binID);
    
    if (it == bin_ids.end())
        return -300;
    else
        return it - bin_ids.begin();

}