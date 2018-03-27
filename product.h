#pragma once
#include <string>
using std::string;

class Product{
	string _name;
	double _price;
	size_t _inventory;
public:
	Product(const string&, double, size_t = 0);
	string ToString()const;
	double GetPrice()const;
};
