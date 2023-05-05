/*
* Bin.cpp
*
* Description : Implementation of Bin class, it contains IoT ID, IP, User object, Product Object, notification cycle
*
* 설명 : 빈 클래스
*		보드 아이디, 아이피, 사용자 객체, 제품 객체, 알림 주기 등의 정보를 담고 있음
*
* Author : Seongjae Hwang, 황성재
* Date : 03. May. 2023, 2023년 05월 03일
*/

#include "Bin.h"
#include "User.h"
#include "Product.h"
#include <string>
#include <vector>


// constructor
Bin::Bin(const vector<char>& ip_addr,
	const vector<User>& userL,
	const Product& product,
	const int& binID,
	const int& boxID,
	const int& alarmCyc,
	const double& binW)
{
    //검증 해야함 일단 테스트용
    this->ip_addr = ip_addr;
    this->userList = userL;
    this->product = product;
    this->binID = binID;
    this->alarmCycle = alarmCyc;
    this->binWeight = binW;
}

// destructor
Bin::~Bin(){}



// getter and setter
vector<char> Bin::getIpAddress() const { return this->ip_addr; }
vector<User> Bin::getUserList() const{ return this->userList; }
Product Bin::getProduct() const { return this->product;}
int Bin::getBinID() const { return this->binID;}
int Bin::getBoxID() const { return this->boxID;}
int Bin::getAlarmCycle() const { return this->alarmCycle; }
double Bin::getBinWeight() const { return this->binWeight; }
Bin::BinState Bin::getBinState() const { return this->state; }



bool Bin::setIpAddress(const vector<char>& ip_addr)
{
    if(IsValidIpAddress(ip_addr))
    {
        this->ip_addr = ip_addr;
        return true;
    }
    else
        return false;
}
bool Bin::setUserList(const vector<User>& userList)
{
    if(Bin::IsValidUserList(userList))
    {
        this->userList = userList;
        return true;
    }
    else
        return false;
}
bool Bin::setProduct(const Product& product)
{
    if(Bin::IsValidProduct(product))
    {
        this->product = product;
        return true;
    }
    else
        return false;
}
bool Bin::setBinID(const int& binID)
{
    if(Bin::IsValidBinID(binID))
    {
        this->binID = binID
        return true;
    }
    else
        return false;
}
bool Bin::setBoxID(const int& boxID)
{
    if(Bin::IsValidBoxID((boxID)))
    {
        this->boxID = boxID;
        return true;
    }
    else
        return false;
}
bool Bin::setAlarmCycle(const int& alarmCyc)
{
    try{
        this->alarmCycle = alarmCyc;
        return true;
    }
    catch(Exception exception)
    {
        return false;
    }
}
bool Bin::setBinWeight(const double& binW)
{
    try{
        this->binWeight = binW;
        return true;
    }
    catch(Exception exception)
    {
        return false;
    }
}
bool Bin::setBinState(const BinState& st)
{
    this->state = st;
    return true;
}



//  functions
bool Bin::IsValidIpAddress(const vector<char>& ip)
{

}
bool Bin::IsValidUserList(const vector<user>& userL)
{

}
bool Bin::IsValidProduct(const Product& product)
{

}
bool Bin::IsValidBinID(const int& binID)
{

}
bool Bin::IsValidBoxID(const int& boxID)
{

}

int Bin::countBinInventory()
{
    if(IsValidProduct(this->product) && this->state.IsLoaded)
    {
        double count = 0;
        count = this->getBinWeight() / this->product.getPerWeight() ;
        int roundUp = count;

       if(roundUp >= 0)
           return roundUp;
       else
           return 0;
           // 나중에 exception empty
    }
}
void Bin::toleranceCalculation()
{

}

