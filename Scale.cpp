/*
* Scale.cpp
*
* Description : Implementation of Scale class, it contains IoT ID, IP, User object, Product Object, notification cycle
*
* 설명 : 빈 클래스
*		보드 아이디, 아이피, 사용자 객체, 제품 객체, 알림 주기 등의 정보를 담고 있음
*
* Author : Seongjae Hwang, 황성재
* Date : 03. May. 2023, 2023년 05월 03일
*/

#include "Scale.h"
#include "Scale.h"
#include "User.h"
#include "Product.h"
#include <string>
#include <vector>


// constructor
Scale::Scale(const string& ip_addr,
    const int& port,
    const vector<User>& userL,
    const Product& product,
    const int& ScaleID,
    const int& boxID,
    const int& alarmCyc,
    const double& ScaleW)
{
    //검증 해야함 일단 테스트용
    this->ip_addr = ip_addr;
    this->port = port;
    this->userList = userL;
    this->product = product;
    this->ScaleID = ScaleID;
    this->alarmCycle = alarmCyc;
    this->ScaleWeight = ScaleW;
}

// destructor
Scale::~Scale() {}



// getter and setter
string Scale::getIpAddress() const { return this->ip_addr; }
int Scale::getPort() const { return this->port; }
vector<User> Scale::getUserList() const { return this->userList; }
Product Scale::getProduct() const { return this->product; }
int Scale::getScaleID() const { return this->ScaleID; }
int Scale::getBoxID() const { return this->boxID; }
int Scale::getAlarmCycle() const { return this->alarmCycle; }
double Scale::getScaleWeight() const { return this->ScaleWeight; }
Scale::ScaleState Scale::getScaleState() const { return this->state; }



bool Scale::setIpAddress(const string& ip_addr)
{
    if (IsValidIpAddress(ip_addr))
    {
        this->ip_addr = ip_addr;
        return true;
    }
    else
        return false;
}
bool Scale::setPort(const int& port)
{
    this->port = port;
    return true;
}
bool Scale::setUserList(const vector<User>& userList)
{
    if (Scale::IsValidUserList(userList))
    {
        this->userList = userList;
        return true;
    }
    else
        return false;
}
bool Scale::setProduct(const Product& product)
{
    if (Scale::IsValidProduct(product))
    {
        this->product = product;
        return true;
    }
    else
        return false;
}
bool Scale::setScaleID(const int& ScaleID)
{
    if (Scale::IsValidScaleID(ScaleID))
    {
        this->ScaleID = ScaleID;
        return true;
    }
    else
        return false;
}
bool Scale::setBoxID(const int& boxID)
{
    if (Scale::IsValidBoxID((boxID)))
    {
        this->boxID = boxID;
        return true;
    }
    else
        return false;
}
bool Scale::setAlarmCycle(const int& alarmCyc)
{
    try {
        this->alarmCycle = alarmCyc;
        return true;
    }
    catch (exception)
    {
        return false;
    }
}
bool Scale::setScaleWeight(const double& ScaleW)
{
    try {
        this->ScaleWeight = ScaleW;
        return true;
    }
    catch (exception)
    {
        return false;
    }
}
bool Scale::setScaleState(const ScaleState& st)
{
    this->state = st;
    return true;
}



//  functions
bool Scale::IsValidIpAddress(const string& ip)
{
    return true;
}
bool Scale::IsValidUserList(const vector<User>& userL)
{
    return true;

}
bool Scale::IsValidProduct(const Product& product)
{
    return true;

}
bool Scale::IsValidScaleID(const int& ScaleID)
{
    return true;

}
bool Scale::IsValidBoxID(const int& boxID)
{
    return true;

}

int Scale::countScaleInventory()
{
    if (IsValidProduct(this->product) && this->state.IsLoaded)
    {
        double count = 0;
        count = this->getScaleWeight() / this->product.getPerWeight();
        int roundUp = count;

        if (roundUp >= 0)
            return roundUp;
        else
            return 0;
        // 나중에 exception empty
    }
}
void Scale::toleranceCalculation()
{

}

