#pragma once
#pragma once
#pragma once
/*
* Box.h
*
* Description : Implementation of Box class, it contains Box IP address, factory num, box numbers,
*
* 설명 : 박스 클래스
*		박스의 url, ip 주소, 공장 번호, 빈 개수 및 정보
*
* Author : Jarrod Hwang, 황성재
* Date : 05. May. 2023, 2023년 05월 05일
*/

#ifndef BOX_H
#define BOX_H

#include "Box.h"
#include "Bin.h"
#include <string>
#include <vector>

using namespace std;

class Box {

private:

    string ip_addr;
    int port;
    vector<int> bin_ids;
    int boxID;
    int factoryID;
    string factoryName;

    struct BoxState
    {
        bool IsConnected;

        bool HasIpAddr;
        bool HasBoxID;
        bool HasFactoryID;
    };
    BoxState state;

public:
    //Constructor
    Box();
    Box(const string& ip_addr,
        const int& port,
        const vector<int>& bin_ids,
        const int& boxID,
        const int& FactoryID,
        const string& factoryName);
    //Destructor
    ~Box();
    //Getter and Setter
    string getIpAddress() const;
    int getPort() const;
    vector<int> getBinIDs() const;
    int getBoxID() const;
    int getFactoryID() const;
    string getFactoryName() const;

    bool setIpAddress(const string& ip_addr);
    bool setPort(const int& port) ;
    bool setBinIds(const vector<int>& bin_ids);
    bool setBoxID(const int& boxID);
    bool setFactoryID(const int& facID);
    bool setFactoryName(const string& fac_n);

    //Functions
    bool IsValidIpAddress(const string& ip);
    bool AddBin(const int& binID);
    bool AddBins(const vector<int>& binIDs);
    int countBins();
    int findBinID(const int& binID);






};
#endif
