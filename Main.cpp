#include "ShopFurniture.h"
#include "CChair.h"
#include "CTable.h"
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main() {
	ShopFurniture* product[100];
	int num = 0, end = 0;
	char menu;
	string tableOrChair, del;
	do {
		cout << "---------- MENU FOR Furniture" << endl;
		cout << "1- add new furniture" << endl;
		cout << "2- show all furnitures" << endl;
		cout << "3- delete chairs or tables" << endl;
		cout << "4- Sholl all white chairs" << endl;
		cout << "5- Create array with all tables with 4 places" << endl;
		cin >> menu;
		switch (menu) {
		case '0': break;
		case '1':cout << " Select table or chair"; cin >> tableOrChair;
			if (tableOrChair == "table") {
				product[num] = new CTable;
				product[num++]->getData();
			}
			if (tableOrChair == "chair") {
				product[num] = new CChair;
				product[num++]->getData();
			}; break;
		case '2':for (int i = 0; i < num; i++) {
			product[i]->displayData();
		}; break;
		case '3':cout << "select to delete chair or table"; cin >> tableOrChair;
			for (int i = 0; i < num; i++) {
				if (product[i]->name == tableOrChair) {

					if (product[i] == 0) {
						break;
					};
					if (i < num) {
						num -= 1;
						for (int j = i; j < num; j++) {
							product[j] = product[j + 1];
						}
					}
				}
				
				
			}; break;
		case '4':for (int i = 0; i < num; i++) {
			CChair* ch = dynamic_cast<CChair*>(product[i]);
			if (ch != nullptr && ch->color == "white") {
				product[i]->displayData();
			}
		}; break;
		case '5': for (int i = 0; i < num; i++) {
			CTable* pl = dynamic_cast<CTable*>(product[i]);
			if (pl != nullptr && pl->nOfPlaces == 4) {
				product[i]->displayData();
			}

		}
				; break;


			}

		} while (menu != '0');
	}
