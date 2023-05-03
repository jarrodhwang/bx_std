#include "User.h"
#include <string>
using namespace std;

User::User(){}
User::User(const string&, const string&, const string&) {}

User::~User(){}

User::~User() {}

// getter and setter
string User::getName() const { return name; }
string User::getPhoneNum() const { return phone_num; }
string User::getEmail() const { return email_adrr; }

void User::setName(const string& in_name) { this->name = in_name; }
void User::setPhoneNum(const string& in_pn) { this->phone_num = in_pn; }
void User::setEmail(const string& in_em) { this->email_adrr = in_em; }


// validation and formatting
int User::nameLength(const string&) {}
bool User::isEmailAddr(const string&) {}
bool User::isPhoneNum(const string&) {}

