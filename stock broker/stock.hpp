#pragma once
#include "common.hpp"

//We are using stock metadata as stock, 
//There should be another class for details like weekly data/stats

class Stock {
    string name;
    double price;
    EXCH xch;
public:
    Stock(string pName, double pPrice, EXCH pExch) : name(pName), price(pPrice), xch(pExch) {}

};
