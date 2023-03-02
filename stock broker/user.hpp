#pragma once
#include "watchlist.hpp"
#include "portfolio.hpp"
class User {
    string userId;
    //double funds;
    //vector<Watchlist*> watchlists;
    //Portfolio* portfolio;
public:
    User(string pUserId) : userId(pUserId){}
    string getUserId() { return userId; }
    //void PlaceOrder(ORDER_TYPE orderType, TXN_TYPE txnType, int qty, double price = 0.0);
};