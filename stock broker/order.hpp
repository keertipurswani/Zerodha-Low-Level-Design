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
    //ORDER_STATUS status;
    //time_t orderTime;
    //vector<Transaction*> transactions;
public:
    Order(TXN_TYPE pTxnType, ORDER_TYPE pOrderType, EXCH pExch, double pPrice, int pQty, Stock* pStock) :
        txnType(pTxnType), orderType(pOrderType), exchange(pExch), price(pPrice), qty(pQty), stock(pStock) {}
    TXN_TYPE getTxnType() { return txnType; }
    EXCH getExchange() { return exchange; }
};