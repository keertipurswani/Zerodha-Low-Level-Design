#pragma once
#include "stock.hpp"
#include "unordered_map"

//fetch & maintain latest stock prices from SE
//all recent prices from here
class StockInventory {
    unordered_map<string, Stock*> stocksMap;
public:
    void AddStock(string pName, Stock* pStock);
};

