#pragma once
#pragma once
/*
* Product.h
*
* Description : Implementation of product class
*				It contains product informations, such as name, weight, proper inventory, error  
* 설명 : 제품 클래스 정의
*		제품명, 기준재고량, 보유재고량, 경고재고량, 단위무게, 오차량(백분율), 단위
*
*
* Author : Seongjae Hwang, 황성재
* Date : 03. May. 2023, 2023년 05월 03일
*/

#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;

class Product {

private:
	string product_name;
	int standard_stock;
	int current_stock;
	int warning_stock;
	double per_weight;
	double tolerance;
	
	struct Unit
	{
		string type = "kg";
	};
	
	Unit unit;


public:
	// Constructor
	Product();

	Product(const string& p_name, const int& std_stk, const int& crt_stk, const int& wrn_stk, const double& per_w, const double& error, const Unit& unit);
	// Destructor
	~Product();
	// getter and setter
	string getProductName() const;
	int getStandardStock() const;
	int getCurrentStock() const;
	int getWarningStock() const;
	double getPerWeight() const;
	double getTolerance() const;
	Unit getUnitType() const;



	bool setProductName(const string& p_name);
	bool setStandardStock(const int& std_stk);
	bool setCurrentStock(const int& crt_stk);
	bool setWarningStock(const int& wrn_stk);
	bool setPerWeight(const double& per_w);
	bool setTolerance(const double& error);
	bool setUnitType(const Unit& unit);

	//  validation functions
	bool IsValidStock(const int& count);
	bool IsValidWeight(const double& weight);


};
#endif
