#pragma once
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
class ShopFurniture
{
private:
	
		float price;
public:
	string name;
	ShopFurniture(void);
	ShopFurniture(string name, float price);
	virtual void getData();
	virtual void displayData();

};

