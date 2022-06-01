#pragma once
#include "ShopFurniture.h"
class CTable :
    public ShopFurniture
{
private:
    
public:
    int nOfPlaces;
    CTable(void);
    CTable(int nOfPlaces);
    void getData();
    void displayData();

};

