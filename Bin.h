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
		vector<char> ip_addr;
		vector<User> userList;
		Product product;
		int binID;
		int boxID;
		int alarmCycle;
		double binWeight;
		


		struct BinState
		{
			bool IsConnected;
			bool IsLoaded;
			bool IsUnderSecureStock;
		};
		BinState state;


	public:

		// Constructor
		Bin(const vector<char>& ip_addr,
			const vector<User>& userL,
			const Product& product,
			const int& binID,
			const int& boxID,
			const int& alarmCyc,
			const double& binW);
		

		// Destructor
		~Bin();


		// getter and setter
		vector<char> getIpAddress() const;
		vector<User> getUserList() const;
		Product getProduct() const;
		int getBinID() const;
		int getBoxID() const;
		int getAlarmCycle() const;
		double getBinWeight() const;
		BinState getBinState() const;



		bool setIpAddress(const vector<char>& ip_addr);
		bool setUserList(const vector<User>& userList);
		bool setProduct(const Product& product);
		bool setBinID(const int& binID);
		bool setBoxID(const int& boxID);
		bool setAlarmCycle(const int& alarmCyc);
		bool setBinWeight(const double& binW);
		bool setBinState(const BinState& st);

		//  functions
		int countBinInventory();
		void toleranceCalculation();
		BinState checkBinResponse();
		BinState checkBinInventoryState();
		

};
#endif
