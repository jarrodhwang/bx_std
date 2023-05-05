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

Box::Box(const vector<char>& ip_addr,
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
vector<char> Box::getIpAddress() const { return this->ip_addr; }
vector<int> Box::getBinIDs() const { return this->bin_ids; }
int Box::getBoxID() const { return this->boxID; }
int Box::getFactoryID() const { return this->factoryID; }
string Box::getFactoryName() const { return this->factoryName; }

bool Box::setIpAddress(const vector<char>& ip_addr) {

}
bool Box::setBinIds(const vector<int>& bin_ids);
bool Box::setBoxID(const int& boxID);
bool Box::setFactoryID(const int& facID);
bool Box::setFactoryName(const string& fac_n);

//Functions
bool Box::IsValidIpAddress(const vector<char>& ip);
bool Box::AddBin(const int& binID);
bool Box::AddBins(const vector<int>& binIDs);
int Box::countBins();
int Box::findBinID(const int& binID);