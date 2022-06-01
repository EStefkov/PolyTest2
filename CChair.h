#pragma once
#include "ShopFurniture.h"
class CChair :
    public ShopFurniture
{
protected:
public:
    string color;
    CChair(void);
    CChair(string color);
    void getData();
    void displayData();
    
};

