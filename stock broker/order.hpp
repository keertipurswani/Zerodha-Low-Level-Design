#pragma once
#include "common.hpp"
#include "stock.hpp"
#include "transaction.hpp"

class Order {
    //string orderId;
    TXN_TYPE txnType;
    ORDER_TYPE orderType;
    EXCH exchange;
    double price;
    int qty;
    Stock* stock;
    //order status should be updated and once order is successful from exchange, 
    //transactions should be stored (which can be viewed in tradebook)
    //ORDER_STATUS status;
    //time_t orderTime;
    //vector<Transaction*> transactions;
public:
    Order(TXN_TYPE pTxnType, ORDER_TYPE pOrderType, EXCH pExch, double pPrice, int pQty, Stock* pStock) :
        txnType(pTxnType), orderType(pOrderType), exchange(pExch), price(pPrice), qty(pQty), stock(pStock) {}
    //there should be getters for all members and getters should be implemented in cpp files
    //since this was coded live, getters were quickly added in hpp file
    TXN_TYPE getTxnType() { return txnType; }
    EXCH getExchange() { return exchange; }
};