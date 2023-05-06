#include "LoadCell.h"
#include "Bin.h"
#include "Box.h"

#include <iostream>
#include <string>
#include <WinSock2.h>
#include <thread>
#include <vector>



void LoadCell::connectBin(){}

void LoadCell::sendData()
{
	WSADATA wsa;
	WORD mVersionRequested = MAKEWORD(2, 2);
	if (WSAStartup(mVersionRequested, &wsa) != 0)
	{
		cout << "WSA error";
		WSACleanup();
		return;
	}

	SOCKET skt;
	skt = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (skt == INVALID_SOCKET)
	{
		cout << "Socket error";
		closesocket(skt);
		WSACleanup();
		return;
	}

	SOCKADDR_IN addr = {};
	addr.sin_family = AF_INET;							// address family internet
	addr.sin_port = htons(4444);						// port to connect
	addr.sin_addr.s_addr = inet_addr("192.168.0.10");	//target IP address

	if (connect(skt, (SOCKADDR*)&addr, sizeof(addr)) == SOCKET_ERROR)
	{
		cout << "connect error" << WSAGetLastError() << endl;
		WSACleanup();
		return;
	}

	char buff[64];
	int sendByte = send(skt, buff, strlen("CEL,101,0"), 0);
	while (true)
	{
		int receiveN = recv(skt, buff, 64, 0);
		cout << "Recived : " << buff << " from IoT board" << endl;
	}








	closesocket(skt);
	WSACleanup();
}
void LoadCell::receiveData(){}




// return double? or CEL, 101, 1...
double LoadCell::getBinWeight(Bin& bin)
{
	Bin::BinState binst;
	binst = bin.getBinState();

	if (binst.HasIpAddr == false) { throw -1;} // noIPaddr exception needed
	if (binst.HasBinID == false) { throw 0;}
	if (binst.HasBoxID == false) { throw 0; }



	return 0;
}
double LoadCell::getBoxWeight(Box& box){}
int LoadCell::IsConnected(const vector<char>& ip_addr){}
int LoadCell::IsConnected(const vector<char>& ip_addr, const int& binID){}

