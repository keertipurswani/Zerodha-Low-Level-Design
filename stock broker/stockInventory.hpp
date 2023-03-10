#pragma once
#include "stock.hpp"
#include "unordered_map"

//It's responsibility is to fetch & maintain latest stock prices from exchange
//This will be the source for latest price of any stock
//It will connect to exchangeConnector (probably a different instance for this responsibility)
//to fetch the prices
class StockInventory {
    unordered_map<string, Stock*> stocksMap;
public:
    void AddStock(string pName, Stock* pStock);
};

