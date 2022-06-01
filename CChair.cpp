#include "CChair.h"
CChair::CChair(void) {
	color = "not found";
}
CChair::CChair(string color) {
	this->color = color;
}
void CChair::getData() {
	ShopFurniture::getData();
	cin.ignore();
	cout << "enter color of the Chair"; getline(cin, color);
}
void CChair::displayData() {
	ShopFurniture::displayData();
	cout << "color of the chair is " << color<<endl;
}