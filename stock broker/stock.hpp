#pragma once
#include "common.hpp"

//We are using stock metadata as stock, there should be another class for details


class Stock {
    string name;
    double price;
    EXCH xch; //string?
public:
    Stock(string pName, double pPrice, EXCH pExch) : name(pName), price(pPrice), xch(pExch) {}

};
