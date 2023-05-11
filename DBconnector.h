#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <mysql.h>

#include "User.h"
#include "Product.h"
#include "Bin.h"
#include "Box.h"
#include "Monitoring.h"
#include "LoadCell.h"
#include "Scale.h"

using namespace std;

class DBconnector
{

private :




	MYSQL* connection;
	MYSQL* conn_result;
	unsigned int timeout_sec = 1;



	// user info 
	User select_user(const User& usr);
	User insert_user(const User& usr);
	User update_user(const User& usr);
	//t_bin		>>	user_id
	User delete_user(const User& usr);


	//product info
	Product select_product(const Product& prt);
	Product insert_product(const Product& prt);
	Product update_product(const Product& prt);
	// t_bin	>>	product_id
	Product delete_product(const Product& prt);


	//scale info
	Scale select_scale(const Scale& scl);
	Scale insert_scale(const Scale& scl);
	Scale update_scale(const Scale& scl);
	Scale delete_scale(const Scale& scl);

	//bin info
	Bin select_bin(const Bin& bin);
	Bin insert_bin(const Bin& bin);
	Bin update_bin(const Bin& bin);
	Bin delete_bin(const Bin& bin);

	//box info
	Box select_box(const Box& box);
	Box insert_box(const Box& box);
	Box update_box(const Box& box);
	Box delete_box(const Box& box);

	////Area info
	//Area select_scale(const Scale& scl);
	//Area insert_scale(const Scale& scl);
	//Area update_scale(const Scale& scl);
	//Area delete_scale(const Scale& scl);

	////scale info
	//Factory select_scale(const Scale& scl);
	//Factory insert_scale(const Scale& scl);
	//Factory update_scale(const Scale& scl);
	//Factory delete_scale(const Scale& scl);


	bool connect();
	bool disconnect();
	bool execute(const string query);


public:
	//select, insert, update, delete
	// timestamp
	
	//타입과 생성자 파라미터 수정 필요
	DBconnector(const string ip_addr, int port, string id, string pw, string db_name );
	~DBconnector();

	/*
	* 로그인 시, 로그인 정보 가져와서 company return
	* TIMESTAMP, log 
	*/
	Company login(const Login& info);

	/*
	* 
	* 차후에 area, factory 관련 쿼리및 구조 작성 해주면 됨
	*/


	/*
	* 지금은 area_uid, factory_id, company_id 고정적으로 들어감
	*/

	vector<Box> selectBox(const Area& area_uid);
	bool insertBox(const Area& area_uid,const Box& box_info);
	bool updateBox(const Area& area_uid, const Box& box_info);
	// box_id를 들고 있는 t_bin, t_scale 유의
	bool deleteBox(const Area& area_uid, const Box& box_info);


	


};



//void main()
//{
//	MYSQL* conn;
//	MYSQL* conn_result;
//	unsigned int timeout_sec = 1;
//	
//	conn = mysql_init(NULL);
//	mysql_options(conn, MYSQL_OPT_CONNECT_TIMEOUT, &timeout_sec);
//	conn_result = mysql_real_connect(conn, "127.0.0.1", "root", "1618", "boxcon_std", 3306, NULL, 0);
//
//	if (NULL == conn_result)
//	{
//		cout << "DB Connection Fail" << endl;
//	}
//	else
//		cout << "DB connector Success" << endl;
//}
