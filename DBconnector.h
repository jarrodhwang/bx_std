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
#include "Cell.h"
#include "Company.h"
#include "Area.h"
#include "Factory.h"

using namespace std;

class DBconnector
{

	//// user info 
	//User select_user(const User& usr);
	//User insert_user(const User& usr);
	//User update_user(const User& usr);
	////t_bin		>>	user_id
	//User delete_user(const User& usr);
	////product info
	//Product select_product(const Product& prt);
	//Product insert_product(const Product& prt);
	//Product update_product(const Product& prt);
	//// t_bin	>>	product_id
	//Product delete_product(const Product& prt);
	////Cell info
	//Cell select_Cell(const Cell& cel);
	//Cell insert_Cell(const Cell& cel);
	//Cell update_Cell(const Cell& cel);
	//Cell delete_Cell(const Cell& cel);
	////bin info
	//Bin select_bin(const Bin& bin);
	//Bin insert_bin(const Bin& bin);
	//Bin update_bin(const Bin& bin);
	//Bin delete_bin(const Bin& bin);
	////box info
	//Box select_box(const Box& box);
	//Box insert_box(const Box& box);
	//Box update_box(const Box& box);
	//Box delete_box(const Box& box);
	////Area info
	//Area select_Cell(const Cell& scl);
	//Area insert_Cell(const Cell& scl);
	//Area update_Cell(const Cell& scl);
	//Area delete_Cell(const Cell& scl);
	////Cell info
	//Factory select_Cell(const Cell& scl);
	//Factory insert_Cell(const Cell& scl);
	//Factory update_Cell(const Cell& scl);
	//Factory delete_Cell(const Cell& scl);


private:

	MYSQL* connection;
	MYSQL* conn_result;
	unsigned int timeout_sec = 1;

	bool connect();
	bool disconnect();
	bool execute(const string query);






	vector<Box> selectBox(const string& area_uid);
	vector<int> selectBoxID(const string& area_uid);
	bool insertBox(const string& area_uid, const Box& box_info);
	bool updateBox(const string& area_uid, const Box& box_info);
	bool deleteBox(const string& area_uid, const Box& box_info); // box_id를 들고 있는 t_bin, t_Cell 유의
	string getLastBoxUpdate(const int& box_id);
	string getLastBoxCheck(const int& box_id);

	vector<Bin> selectBin(const int& box_id);
	vector<int> selectBinID(const int& box_id);
	bool insertBin(const int& box_id, const Bin& bin_info);
	bool updateBin(const int& box_id, const Bin& bin_info);
	bool deleteBin(const int& box_id, const Bin& bin_info);	// bin_id를 들고 있는 t_bin, t_Cell 유의
	string getLastBinUpdate(const int& box_id);
	string getLastBinCheck(const int& box_id);

	vector<Cell> selectCell(const int& box_id, const int& bin_id);
	vector<int> selectCellID(const int& box_id, const int& bin_id);
	bool insertCell(const int& box_id, const int& bin_id, const Cell& cell_info);
	bool updateCell(const int& box_id, const int& bin_id, const Cell& cell_info);
	bool deleteCell(const int& box_id, const int& bin_id, const Cell& cell_info);	// cell_id를 들고 있는 t_Cell 유의
	string getLastCellUpdate(const int& box_id);
	string getLastCellCheck(const int& box_id);

	bool checkUserIdDup(const string& user_id);
	bool selectUser(const string& user_id);
	bool insertUser(const string& user_id);
	bool updateUser(const string& user_id);
	bool deleteUser(const string& user_id); // t_bin


	bool checkProductIdDup(const string& product_id);
	bool checkProductNmDup(const string& product_name);
	bool selectProduct(const string& product_id);
	bool insertProduct(const string& product_id);
	bool deleteProduct(const string& product_id); // t_bin


public:

	/*
	* 로그인 시, 로그인 정보 가져와서 company return
	* TIMESTAMP, log 
	*/
	/*Company login(const Login& info);*/
	/*
	* 
	* 차후에 area, factory 관련 쿼리및 구조 작성 해주면 됨
	*/
	/*
	* 지금은 area_uid, factory_id, company_id 고정적으로 들어감
	*/




	//박스 선택, 구역 선택 , 공장 선택 생략
	vector<int> selAreaId_factory(const Factory& fac);
	vector<Area> selArea_factory(const Factory& fac);
	vector<int> selBoxId_area(const Area& area);
	vector<Box> selBox_area(const Area& area);
	bool update_box(const Box& box);



	vector<Product> selProduct_bin(const Bin& bin);
	vector<Product> selProduct_box(const Box& box);
	vector<Product> selProduct_area(const Area& area);
	vector<Product> selProduct_factory(const Factory& fac);

	vector<int> selBinId_product(const Product& product, const Box& box);
	vector<Bin> selBin_product(const Product& product, const Box& box);
	vector<int> selCellId_bin(const Bin& bin);
	vector<Cell> selCell_bin(const Bin& bin);
	int selBinWeight_bin(const Bin& bin, const Box& box);
	int selCellWeight_cell(const Cell& cell, const Bin& bin);


	bool updateBin(const Bin& bin);
	/*bool deleteBin(const Bin& bin);*/

	bool insertProduct(const Product& item);
	bool updateProduct(const Product& item);
	bool deleteProduct(const Product& item, const Bin& bin); // t_bin >> product_id, in_use, bin_stock, ... delete

	bool updateUser(const User& user);



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
