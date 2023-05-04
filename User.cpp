#include "User.h"
#include <string>


User::User() {}

User::User(const string& in_name,  char* in_pn, const string& in_em) { }

User::~User(){}



// getter and setter
string User::getName() const { return this->name; }
char* User::getPhoneNum() const { return this->phone_num; }
string User::getEmail() const { return this->email_adrr; }

bool User::setName(const string& in_name)
{
	if (nameLength(in_name) > 12)
	{
		this->name = in_name;
		return true;
	}
	else
		return false;
}

bool User::setPhoneNum( char in_pn[])
{
	if (IsPhoneNum(in_pn))
	{
		this->phone_num = in_pn;
		return true;
	}
	else
		return false;
}

bool User::setEmail(const string& in_em) 
{
	if (IsEmailAddr(in_em))
	{
		this->email_adrr = in_em;
		return true;
	}
	else
		return false;
	
}
	


// validation and formatting
int User::nameLength(const string& in_name) { return in_name.length(); }

bool User::IsEmailAddr(const string& in_em)
{
	if (in_em.find("@") != string::npos)	
		return true;
}

bool User::IsPhoneNum(char* in_pn)
{
	if (strlen(in_pn) > 12)
		return false;

	for (int i = 0; i < strlen(in_pn); i++)
	{
		if (isdigit(in_pn[i]) == false)
		{
			return false;
		}
	}
}

