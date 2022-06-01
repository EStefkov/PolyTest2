#include "ShopFurniture.h"

ShopFurniture::ShopFurniture(void) {
	name = "not entered";
	price = 0.00;
}
ShopFurniture::ShopFurniture(string name, float price) {
	this->name = name;
	this->price = price;
}
 void ShopFurniture::getData() {
	cin.ignore();
	cout << "Enter table or chair"; getline(cin, name);
	cout << "enter price for " << name; cin >> price;
}
 void ShopFurniture::displayData() {
	 cout << " You select" << name;
	 cout << "with price of " << price;
 }
