/*
* Cell.cpp
*
* Description : Implementation of Cell class, it contains IoT ID, IP, User object, Product Object, notification cycle
*
* 설명 : 빈 클래스
*		보드 아이디, 아이피, 사용자 객체, 제품 객체, 알림 주기 등의 정보를 담고 있음
*
* Author : Seongjae Hwang, 황성재
* Date : 03. May. 2023, 2023년 05월 03일
*/

#include "Cell.h"
#include "User.h"
#include "Product.h"
#include <string>
#include <vector>


// constructor
Cell::Cell(const string& ip_addr,
    const int& port,
    const vector<User>& userL,
    const Product& product,
    const int& CellID,
    const int& boxID,
    const int& alarmCyc,
    const double& CellW)
{
    //검증 해야함 일단 테스트용
    this->ip_addr = ip_addr;
    this->port = port;
    this->userList = userL;
    this->product = product;
    this->CellID = CellID;
    this->alarmCycle = alarmCyc;
    this->CellWeight = CellW;
}

// destructor
Cell::~Cell() {}



// getter and setter
string Cell::getIpAddress() const { return this->ip_addr; }
int Cell::getPort() const { return this->port; }
vector<User> Cell::getUserList() const { return this->userList; }
Product Cell::getProduct() const { return this->product; }
int Cell::getCellID() const { return this->CellID; }
int Cell::getBoxID() const { return this->boxID; }
int Cell::getAlarmCycle() const { return this->alarmCycle; }
double Cell::getCellWeight() const { return this->CellWeight; }
Cell::CellState Cell::getCellState() const { return this->state; }



bool Cell::setIpAddress(const string& ip_addr)
{
    if (IsValidIpAddress(ip_addr))
    {
        this->ip_addr = ip_addr;
        return true;
    }
    else
        return false;
}
bool Cell::setPort(const int& port)
{
    this->port = port;
    return true;
}
bool Cell::setUserList(const vector<User>& userList)
{
    if (Cell::IsValidUserList(userList))
    {
        this->userList = userList;
        return true;
    }
    else
        return false;
}
bool Cell::setProduct(const Product& product)
{
    if (Cell::IsValidProduct(product))
    {
        this->product = product;
        return true;
    }
    else
        return false;
}
bool Cell::setCellID(const int& CellID)
{
    if (Cell::IsValidCellID(CellID))
    {
        this->CellID = CellID;
        return true;
    }
    else
        return false;
}
bool Cell::setBoxID(const int& boxID)
{
    if (Cell::IsValidBoxID((boxID)))
    {
        this->boxID = boxID;
        return true;
    }
    else
        return false;
}
bool Cell::setAlarmCycle(const int& alarmCyc)
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
bool Cell::setCellWeight(const double& CellW)
{
    try {
        this->CellWeight = CellW;
        return true;
    }
    catch (exception)
    {
        return false;
    }
}
bool Cell::setCellState(const CellState& st)
{
    this->state = st;
    return true;
}



//  functions
bool Cell::IsValidIpAddress(const string& ip)
{
    return true;
}
bool Cell::IsValidUserList(const vector<User>& userL)
{
    return true;

}
bool Cell::IsValidProduct(const Product& product)
{
    return true;

}
bool Cell::IsValidCellID(const int& CellID)
{
    return true;

}
bool Cell::IsValidBoxID(const int& boxID)
{
    return true;

}

int Cell::countCellInventory()
{
    if (IsValidProduct(this->product) && this->state.IsLoaded)
    {
        double count = 0;
        count = this->getCellWeight() / this->product.getPerWeight();
        int roundUp = count;

        if (roundUp >= 0)
            return roundUp;
        else
            return 0;
        // 나중에 exception empty
    }
}
void Cell::toleranceCalculation()
{

}

