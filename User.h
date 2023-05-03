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
#include <string>
using namespace std;

class User {
	// 1. 이름
	// 2. 전화번호
	// 3. 이메일 주소
	private: 
		string name;
		string phone_num;
		string email_adrr;


	public:
		// Constructor
		User();

		User(const string&, const string&, const string&);
		// Destructor
		~User();
		// getter and setter
		string getName() const;
		string getPhoneNum() const;
		string getEmail() const;

		void setName(const string&);
		void setPhoneNum(const string&);
		void setEmail(const string&);
		// validation and formatting


		int nameLength(const string&);
		bool isEmailAddr(const string&);
		bool isPhoneNum(const string&);
		


};