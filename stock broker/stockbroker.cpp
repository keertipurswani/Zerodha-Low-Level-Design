#include "user.hpp"
#include "OrderMgr.hpp"
#include "common.hpp"
/*
    1. place buy/sell market/limit order
    2. check enough stocks/money
    3. deduct stocks/money


*/

int main() {

    User* user = new User("keerti");
    System::addUser("keerti", user);
    //StockInventory* inventory = new StockInventory();
    Stock* SBIStock = new Stock("SBI", 530.0, EXCH::NSE);


    //inventory->AddStock("SBI", SBIStock);
    //inventory->AddStock("ITC", new Stock("ITC", 375.0, BSE));

    Order* order = new Order(TXN_TYPE::SELL, ORDER_TYPE::MARKET, EXCH::NSE, 531.0, 10, SBIStock);
    OrderMgr* orderMgr = new OrderMgr();
    orderMgr->PlaceOrder("keerti", order);
    return 0;
}