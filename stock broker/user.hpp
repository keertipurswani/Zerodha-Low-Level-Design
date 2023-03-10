#pragma once
#include "watchlist.hpp"
#include "portfolio.hpp"
//There are ofcourse many details of user that need to be stored (like DOB, Id details like adhar, pan card)
//The id and name would also be obviously different
//For demo pruposes and make the design faster, it makes sense to just have user id for now
//Notice that we would store other details like funds, watchlists and portfolio as well
//Validator would need these details from getters to validate orders
class User {
    string userId;
    //double funds;
    //vector<Watchlist*> watchlists;
    //Portfolio* portfolio;
public:
    User(string pUserId) : userId(pUserId){}
    string getUserId() { return userId; }
};