#pragma once

#include "Bin.h"
#include "Box.h"

#include <string>
#include <WinSock2.h>
#include <thread>
#include <vector>

using namespace std;
#define PACKET_SIZE 512

class LoadCell
{
private: 

	static void connectBin();
	static void sendData();
	static void receiveData();
	

public:

	// return double? or CEL, 101, 1...
	static double getBinWeight( Bin& bin);
	static double getBoxWeight( Box& box);
	static int IsConnected(const vector<char>& ip_addr);
	static int IsConnected(const vector<char>& ip_addr, const int& binID);


	



};

