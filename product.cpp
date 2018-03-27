#include "product.h"
#include <string>
#include <sstream>
#include <iomanip>
using std::string;
using std::stringstream;
using std::setw;
using std::setprecision;
using std::fixed;

Product::Product(const string& name, double price, size_t inventory):_name(name), _price(price), _inventory(inventory){
}
string Product::ToString()const{
	stringstream retVal;
	retVal << setw(15) << _name << setw(8) << setprecision(2) << fixed << _price << setw(4) << _inventory;
	return retVal.str();
}
double Product::GetPrice()const{
	return _price;
}
