#include "DBconnector.h"

bool DBconnector::connect()
{
	return false;
}

bool DBconnector::disconnect()
{
	return false;
}


bool DBconnector::execute(const string query)
{
	return false;
}







vector<Box> DBconnector::selectBox(const string& area_uid)
{
	return vector<Box>();
}

vector<int> DBconnector::selectBoxID(const string& area_uid)
{
	return vector<int>();
}

bool DBconnector::insertBox(const string& area_uid, const Box& box_info)
{
	return false;
}

bool DBconnector::updateBox(const string& area_uid, const Box& box_info)
{
	return false;
}

bool DBconnector::deleteBox(const string& area_uid, const Box& box_info)
{
	return false;
}

string DBconnector::getLastBoxUpdate(const int& box_id)
{
	return "";
}

string DBconnector::getLastBoxCheck(const int& box_id)
{
	return "";
}









vector<Bin> DBconnector::selectBin(const int& box_id) { return vector<Bin>(); }
vector<int> DBconnector::selectBinID(const int& box_id) { return vector<int>(); }
bool DBconnector::insertBin(const int& box_id, const Bin& bin_info) { return false; }
bool DBconnector::updateBin(const int& box_id, const Bin& bin_info) { return false; }
bool DBconnector::deleteBin(const int& box_id, const Bin& bin_info) { return false; }	// bin_id를 들고 있는 t_bin, t_Cell 유의
string DBconnector::getLastBinUpdate(const int& box_id) { return ""; }
string DBconnector::getLastBinCheck(const int& box_id) { return ""; }




vector<Cell> DBconnector::selectCell(const int& box_id, const int& bin_id) { return vector<Cell>(); }
vector<int> DBconnector::selectCellID(const int& box_id, const int& bin_id) { return vector<int>(); }
bool DBconnector::insertCell(const int& box_id, const int& bin_id, const Cell& cell_info) { return false; }
bool DBconnector::updateCell(const int& box_id, const int& bin_id, const Cell& cell_info) { return false; }
bool DBconnector::deleteCell(const int& box_id, const int& bin_id, const Cell& cell_info) { return false; }	// cell_id를 들고 있는 t_Cell 유의
string DBconnector::getLastCellUpdate(const int& box_id) { return ""; }
string DBconnector::getLastCellCheck(const int& box_id) { return ""; }



bool DBconnector::checkUserIdDup(const string& user_id) { return false; }
bool DBconnector::selectUser(const string& user_id) { return false; }
bool DBconnector::insertUser(const string& user_id){return false;}
bool DBconnector::updateUser(const string& user_id){return false;}
bool DBconnector::deleteUser(const string& user_id){return false;} // t_bin


bool DBconnector::checkProductIdDup(const string& product_id){return false;}
bool DBconnector::checkProductNmDup(const string& product_name){return false;}
bool DBconnector::selectProduct(const string& product_id){return false;}
bool DBconnector::insertProduct(const string& product_id){return false;}
bool DBconnector::deleteProduct(const string& product_id){return false;} // t_bin


/*
* 
* public section
* 
* 
* 
* 
* 
* 
*/


//박스 선택, 구역 선택 , 공장 선택 생략
vector<int> DBconnector::selAreaId_factory(const Factory& fac) { return vector<int>(); }
vector<Area> DBconnector::selArea_factory(const Factory& fac) { return vector<Area>(); }
vector<int> DBconnector::selBoxId_area(const Area& area) { return vector<int>(); }
vector<Box> DBconnector::selBox_area(const Area& area) { return vector<Box>(); }
bool DBconnector::update_box(const Box& box) { return false; }



vector<Product> DBconnector::selProduct_bin(const Bin& bin) { return vector<Product>(); }
vector<Product> DBconnector::selProduct_box(const Box& box){return vector<Product>();}
vector<Product> DBconnector::selProduct_area(const Area& area){return vector<Product>();}
vector<Product> DBconnector::selProduct_factory(const Factory& fac){return vector<Product>();}

vector<int> DBconnector::selBinId_product(const Product& product, const Box& box) { return vector<int>(); }
vector<Bin> DBconnector::selBin_product(const Product& product, const Box& box) { return vector<Bin>(); }
vector<int> DBconnector::selCellId_bin(const Bin& bin) { return vector<int>(); }
vector<Cell> DBconnector::selCell_bin(const Bin& bin) { return vector<Cell>(); }
int DBconnector::selBinWeight_bin(const Bin& bin, const Box& box) { return 0; }
int DBconnector::selCellWeight_cell(const Cell& cell, const Bin& bin) { return 0; }


bool DBconnector::updateBin(const Bin& bin) { return false; }
/*bool deleteBin(const Bin& bin);*/

bool DBconnector::insertProduct(const Product& item) { return false; }
bool DBconnector::updateProduct(const Product& item){return  false;}
bool DBconnector::deleteProduct(const Product& item, const Bin& bin){return false;} // t_bin >> product_id, in_use, bin_stock, ... delete

bool DBconnector::updateUser(const User& user){return  false;}