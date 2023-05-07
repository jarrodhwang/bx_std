#pragma once
#pragma once
#pragma once
/*
* Bin.h
*
* Description : Implementation of Bin class, it contains IoT ID, IP, User object, Product Object, notification cycle
* 
* 설명 : 빈 클래스 
*		보드 아이디, 아이피, 사용자 객체, 제품 객체, 알림 주기 등의 정보를 담고 있음
*
* Author : Seongjae Hwang, 황성재
* Date : 03. May. 2023, 2023년 05월 03일
*/

#ifndef BIN_H
#define BIN_H

#include "User.h"
#include "Product.h"
#include <string>
#include <vector>

using namespace std;


class Bin {

	private:
		string ip_addr;
		int port;
		vector<User> userList;
		Product product;
		int binID;
		int boxID;
		int alarmCycle;
		double binWeight;
		



	public:

		struct BinState
		{
			bool IsConnected = false;
			bool IsLoaded = false;
			bool IsUnderSecureStock = false;

			bool HasIpAddr = false;
			bool HasPort = false;
			bool HasBinID = false;
			bool HasBoxID = false;
			bool HasUserL = false;
			bool HasAlarmCycle = false;
		};

		BinState state;

		// Constructor
		Bin(const string& ip_addr,
			const int& port,
			const vector<User>& userL,
			const Product& product,
			const int& binID,
			const int& boxID,
			const int& alarmCyc,
			const double& binW);
		

		// Destructor
		~Bin();


		// getter and setter
		string getIpAddress() const;
		int getPort() const;
		vector<User> getUserList() const;
		Product getProduct() const;
		int getBinID() const;
		int getBoxID() const;
		int getAlarmCycle() const;
		double getBinWeight() const;
		BinState getBinState() const;



		bool setIpAddress(const string& ip_addr);
		bool setPort(const int& port);
		bool setUserList(const vector<User>& userList);
		bool setProduct(const Product& product);
		bool setBinID(const int& binID);
		bool setBoxID(const int& boxID);
		bool setAlarmCycle(const int& alarmCyc);
		bool setBinWeight(const double& binW);
		bool setBinState(const BinState& st);

		//  functions
        bool IsValidIpAddress(const string& ip);
        bool IsValidUserList(const vector<User>& userL);
        bool IsValidProduct(const Product& product);
        bool IsValidBinID(const int& binID);
        bool IsValidBoxID(const int& boxID);

		int countBinInventory();
		void toleranceCalculation();




};
#endif
