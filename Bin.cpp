#include "Bin.h"
#include "User.h"
#include "Product.h"
#include <string>
#include <vector>




// construtor
Bin::Bin(const vector<char>& ip_addr,
	const vector<User>& userL,
	const Product& product,
	const int& binID,
	const int& boxID,
	const int& alarmCyc,
	const double& binW)
{

}

// destructor
Bin::~Bin(){}



// getter and setter
vector<char> Bin::getIpAddress() const {}
vector<User> Bin::getUserList() const {}
Product Bin::getProduct() const {}
int Bin::getBinID() const {}
int Bin::getBoxID() const {}
int Bin::getAlarmCycle() const {}
double Bin::getBinWeight() const {}
Bin::BinState Bin::getBinState() const {}



bool Bin::setIpAddress(const vector<char>& ip_addr){}
bool Bin::setUserList(const vector<User>& userList){}
bool Bin::setProduct(const Product& product){}
bool Bin::setBinID(const int& binID){}
bool Bin::setBoxID(const int& boxID){}
bool Bin::setAlarmCycle(const int& alarmCyc){}
bool Bin::setBinWeight(const double& binW){}
bool Bin::setBinState(const BinState& st) {}