#include "LoadCell.h"
#include "Bin.h"
#include "Box.h"

#include <iostream>
#include <string>
#include <WinSock2.h>
#include <thread>
#include <vector>

using namespace std;
//[DllImport("user32.dll")]


SOCKET LoadCell::connectBin(const string& ip_addr, const int& port, const int& binID)
{
	// winsock 윈속 버전체크 하위호환성 검증
	WSADATA wsa;
	WORD mVersionRequested = MAKEWORD(2, 2);
	if (WSAStartup(mVersionRequested, &wsa) != 0)
	{
		cout << "WSA error";
		WSACleanup();
		return 0;
	}
	
	SOCKET skt;
	skt = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (skt == INVALID_SOCKET)
	{
		cout << "Socket error";
		closesocket(skt);
		WSACleanup();
		return 0;
	}

	SOCKADDR_IN addr = {};
	addr.sin_family = AF_INET;							// address family internet
	addr.sin_port = htons(port);						// port to connect
	char ip[] = "192.168.1";
	addr.sin_addr.s_addr = inet_addr("192.168.0.10");	//target IP address

	if (connect(skt, (SOCKADDR*)&addr, sizeof(addr)) == SOCKET_ERROR)
	{
		cout << "connect error" << WSAGetLastError() << endl;
		WSACleanup();
		return 0;
	}

	return skt;
}

SOCKET LoadCell::sendData(SOCKET connectedSocket, const int& binID)
{
	// example
	// send "CEL,101"
	// return "CEL,101,250"
	string data = "CEL,";
	data += binID;
	char* buff = const_cast<char*>(data.c_str());
	int sendByte = send(connectedSocket, buff, strlen(buff), 0);
	
	return connectedSocket;
}
string LoadCell::receiveData(SOCKET connectedSocket)
{
	char* buff = "empty";
	string answer = "-100";
	while (true)
	{
		try
		{
			int receiveN = recv(connectedSocket, buff, 64, 0);
			cout << "Recived : " << buff << " from IoT board" << endl;
			if (receiveN <= 0) { break; }
			else
			{
				answer = buff;
				answer.substr(3 + 3 + 1);
			}
		}
		catch (const std::invalid_argument& ex)
		{
			std::cerr << "Invalid argument while converting string to number" << endl;
			std::cerr << "Error: " << ex.what() << endl;
			break;
		}
		catch (const std::out_of_range& ex)
		{
			std::cerr << "Invalid argument while converting string to number" << endl;
			std::cerr << "Error: " << ex.what() << endl;
			break;
		}
	}


	closesocket(connectedSocket);
	WSACleanup();
	
	return answer;
}




// return double? or CEL, 101, 1...
double LoadCell::getBinWeight(Bin& bin)
{
	Bin::BinState binst;
	binst = bin.getBinState();

	if (binst.HasIpAddr == false) { throw -1; } // noIPaddr exception needed
	if (binst.HasBinID == false) { throw -1; }
	if (binst.HasBoxID == false) { throw -1; }
	
	SOCKET skt = connectBin(bin.getIpAddress(), bin.getPort(), bin.getBinID());

	skt = sendData(skt, bin.getBinID());
	string answer = receiveData(skt);

	double binWeight = -200;
	try
	{
		double binWeight = stod(answer);
	}
	catch (std::invalid_argument)
	{
		return -200;
	}


	return binWeight;
}

double LoadCell::getBoxWeight(Box& box)
{
	// box의 bin id를 가지고 옴
	// bin id와 box id로 데이터베이스에서 빈 객체를 가지고 옴
	// getBinWeight(Bin& bin) 호출
	// 빈 무게 합산하여 리턴
	return 0;
}
int LoadCell::IsConnected(const vector<char>& ip_addr)
{
	return 0;
}
int LoadCell::IsConnected(const vector<char>& ip_addr, const int& binID)
{
	return 0;
}

