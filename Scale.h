#pragma once
#pragma once
#pragma once
/*
* Scale.h
*
* Description : Implementation of Scale class, it contains IoT ID, IP, User object, Product Object, notification cycle
*
* 설명 : 빈 클래스
*		보드 아이디, 아이피, 사용자 객체, 제품 객체, 알림 주기 등의 정보를 담고 있음
*
* Author : Seongjae Hwang, 황성재
* Date : 03. May. 2023, 2023년 05월 03일
*/

#ifndef SCALE_H
#define SCALE_H

#include "User.h"
#include "Product.h"
#include <string>
#include <vector>

using namespace std;


class Scale {

private:
	string ip_addr;
	int port;
	vector<User> userList;
	Product product;
	int ScaleID;
	int boxID;
	int alarmCycle;
	double ScaleWeight;




public:

	struct ScaleState
	{
		bool IsConnected = false;
		bool IsLoaded = false;
		bool IsUnderSecureStock = false;

		bool HasIpAddr = false;
		bool HasPort = false;
		bool HasScaleID = false;
		bool HasBoxID = false;
		bool HasUserL = false;
		bool HasAlarmCycle = false;
	};

	ScaleState state;

	// Constructor
	Scale(const string& ip_addr,
		const int& port,
		const vector<User>& userL,
		const Product& product,
		const int& ScaleID,
		const int& boxID,
		const int& alarmCyc,
		const double& ScaleW);


	// Destructor
	~Scale();


	// getter and setter
	string getIpAddress() const;
	int getPort() const;
	vector<User> getUserList() const;
	Product getProduct() const;
	int getScaleID() const;
	int getBoxID() const;
	int getAlarmCycle() const;
	double getScaleWeight() const;
	ScaleState getScaleState() const;



	bool setIpAddress(const string& ip_addr);
	bool setPort(const int& port);
	bool setUserList(const vector<User>& userList);
	bool setProduct(const Product& product);
	bool setScaleID(const int& ScaleID);
	bool setBoxID(const int& boxID);
	bool setAlarmCycle(const int& alarmCyc);
	bool setScaleWeight(const double& ScaleW);
	bool setScaleState(const ScaleState& st);

	//  functions
	bool IsValidIpAddress(const string& ip);
	bool IsValidUserList(const vector<User>& userL);
	bool IsValidProduct(const Product& product);
	bool IsValidScaleID(const int& ScaleID);
	bool IsValidBoxID(const int& boxID);

	int countScaleInventory();
	void toleranceCalculation();




};
#endif
