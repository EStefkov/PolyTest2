#include "CTable.h"
CTable::CTable(void){
	nOfPlaces = 0;
}
CTable::CTable(int nOfPlaces) {
	this->nOfPlaces = nOfPlaces;
}
void CTable::getData() {
	ShopFurniture::getData();
	cout << "enter how many place had table"; cin >> nOfPlaces;
}
void CTable::displayData() {
	ShopFurniture::displayData();
	cout << "Table with " << nOfPlaces << " places";
}
