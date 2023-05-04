#include "Product.h"
#include <string>

Product::Product()
{
}

Product::Product(const string& p_name, const int& std_stk, const int& crt_stk, const int& wrn_stk, const double& per_w, const double& error, const Unit& unit)
{
	this->product_name = p_name;
	this->standard_stock = std_stk;
	this->current_stock = crt_stk;
	this->warning_stock = wrn_stk;
	this->per_weight = per_w;
	this->error_percentage = error;
	this->unit = unit;
}

Product::~Product()
{
}

/*
* getter
*/
string Product::getProductName() const
{
	return this->product_name;
}

int Product::getStandardStock() const
{
	return this->standard_stock;
}

int Product::getCurrentStock() const
{
	return this->current_stock;
}

int Product::getWarningStock() const
{
	return this->warning_stock;
}

double Product::getPerWeight() const
{
	return this->per_weight;
}

double Product::getErrorPercentage() const
{
	return this->error_percentage;
}

Product::Unit Product::getUnitType() const
{
	return this->unit;
}


/*
* setter
*/

bool Product::setProductName(const string& p_name) 
{
	this->product_name = p_name;
	return true;
}

bool Product::setStandardStock(const int& std_stk) 
{
	if (IsValidStock(std_stk))
	{
		this->standard_stock = std_stk;
		return true;
	}
	else
		return false;
}

bool Product::setCurrentStock(const int& crt_stk) 
{
	if (IsValidStock(crt_stk))
	{
		this->current_stock = crt_stk;
		return true;
	}
	else
		return false;
}

bool Product::setWarningStock(const int& wrn_stk) 
{
	if (IsValidStock(wrn_stk))
	{
		this->warning_stock = wrn_stk;
		return true;
	}
	else
		return false;
}

bool Product::setPerWeight(const double& per_w) 
{
	if (IsValidWeight(per_w))
	{
		this->per_weight = per_w;
		return true;
	}
	else
		return false;
}

bool Product::setErrorPercentage(const double& error) 
{
	this->error_percentage = error;
	return true;
}

bool Product::setUnitType(const Unit& unit) 
{
	this->unit = unit;
	return true;
}



// vaildation test

bool Product::IsValidStock(const int& count)
{
	if (count >= 0 && count < 100000)
		return true;
	else
		return false;
}


bool Product::IsValidWeight(const double& weight)
{
	if (weight >= 0 && weight < 100000)
		return true;
	else
		return false;
}
