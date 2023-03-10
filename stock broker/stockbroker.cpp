#include "user.hpp"
#include "OrderMgr.hpp"
#include "common.hpp"

int main() {

    User* user = new User("keerti");
    System::addUser("keerti", user);

    //We haven't dealt with inventory for demo
    //StockInventory* inventory = new StockInventory();
    Stock* SBIStock = new Stock("SBI", 530.0, EXCH::NSE);

    //inventory->AddStock("SBI", SBIStock);
    //inventory->AddStock("ITC", new Stock("ITC", 375.0, BSE));

    Order* order = new Order(TXN_TYPE::SELL, ORDER_TYPE::MARKET, EXCH::NSE, 531.0, 10, SBIStock);
    OrderMgr* orderMgr = new OrderMgr();
    orderMgr->PlaceOrder("keerti", order);
    return 0;
}