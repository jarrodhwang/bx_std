#pragma once
/*
* User.h
* 
* Description : Implementation of user class
*				It contains user information such as phone number 
* 설명 : 사용자 클래스의 정의
*		알림을 받을 사용자에 관한 정보
* 
* 
* Author : Seongjae Hwang, 황성재
* Date : 03. May. 2023, 2023년 05월 03일
*/

#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
	// 1. 이름
	// 2. 전화번호
	// 3. 이메일 주소
	private: 
		string name;
		char* phone_num;
		string email_adrr;


	public:
		// Constructor
		User();

		User(const string& in_name, char* in_pn, const string& in_em);
		// Destructor
		~User();
		// getter and setter
		string getName() const;
		char* getPhoneNum() const;
		string getEmail() const;

		bool setName(const string& in_name);
		bool setPhoneNum(char* in_pn);
		bool setEmail(const string& in_em);

		// validation and formatting

		int nameLength(const string& in_name);
		bool isEmailAddr(const string& in_em);
		bool isPhoneNum(char* in_pn);
		
};
#endif
