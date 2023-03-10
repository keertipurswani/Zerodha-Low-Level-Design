#pragma once
#include "stock.hpp"
//Each watchlist also has a name, so we should also store a map of string or id to the watchlist
class Watchlist {
    vector<Stock> stocks;
    string name;
public:
    //AddStockToWatchlist(stock, watchlist id)
    //RemoveStockFromWatchlist(stock, watchlist id)
};

