#pragma once
#pragma once
#pragma once
/*
* Cell.h
*
* Description : Implementation of Cell class, it contains IoT ID, IP, User object, Product Object, notification cycle
*
* 설명 : 빈 클래스
*		보드 아이디, 아이피, 사용자 객체, 제품 객체, 알림 주기 등의 정보를 담고 있음
*
* Author : Seongjae Hwang, 황성재
* Date : 03. May. 2023, 2023년 05월 03일
*/

#ifndef Cell_H
#define Cell_H

#include "User.h"
#include "Product.h"
#include <string>
#include <vector>

using namespace std;


class Cell {

private:
	string ip_addr;
	int port;
	vector<User> userList;
	Product product;
	int CellID;
	int boxID;
	int alarmCycle;
	double CellWeight;




public:

	struct CellState
	{
		bool IsConnected = false;
		bool IsLoaded = false;
		bool IsUnderSecureStock = false;

		bool HasIpAddr = false;
		bool HasPort = false;
		bool HasCellID = false;
		bool HasBoxID = false;
		bool HasUserL = false;
		bool HasAlarmCycle = false;
	};

	CellState state;

	// Constructor
	Cell(const string& ip_addr,
		const int& port,
		const vector<User>& userL,
		const Product& product,
		const int& CellID,
		const int& boxID,
		const int& alarmCyc,
		const double& CellW);


	// Destructor
	~Cell();


	// getter and setter
	string getIpAddress() const;
	int getPort() const;
	vector<User> getUserList() const;
	Product getProduct() const;
	int getCellID() const;
	int getBoxID() const;
	int getAlarmCycle() const;
	double getCellWeight() const;
	CellState getCellState() const;



	bool setIpAddress(const string& ip_addr);
	bool setPort(const int& port);
	bool setUserList(const vector<User>& userList);
	bool setProduct(const Product& product);
	bool setCellID(const int& CellID);
	bool setBoxID(const int& boxID);
	bool setAlarmCycle(const int& alarmCyc);
	bool setCellWeight(const double& CellW);
	bool setCellState(const CellState& st);

	//  functions
	bool IsValidIpAddress(const string& ip);
	bool IsValidUserList(const vector<User>& userL);
	bool IsValidProduct(const Product& product);
	bool IsValidCellID(const int& CellID);
	bool IsValidBoxID(const int& boxID);

	int countCellInventory();
	void toleranceCalculation();




};
#endif
