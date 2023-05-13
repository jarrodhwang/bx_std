#pragma once

#include "Bin.h"
#include "Box.h"

#include <string>
#include <WinSock2.h>
#include <vector>

using namespace std;
#define PACKET_SIZE 512

class LoadCell
{
private:

	static SOCKET connectBin(const string& ip_addr, const int& port, const int& binID);
	static SOCKET sendData(SOCKET connectedSocket, const int& binID);
	static string receiveData(SOCKET connectedSocket);
	

public:

	// return double? or Cell, 101, 1...
	static double getBinWeight(Bin& bin);
	static double getBoxWeight(Box& box);
	static int IsConnected(const vector<char>& ip_addr);
	static int IsConnected(const vector<char>& ip_addr, const int& binID);


	



};

