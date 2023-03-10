#pragma once
#include "common.hpp"
#include "order.hpp"
#include <mutex>

/*
* We have designed EXCHConnector to be singleton since we wanted one instance to interact with Exchanges
* We could have had one instance for every exchange (eg - 1 instance for NSE, 1 for BSE) or
* We could have a pool of instances who are responsible for interaction with Exchanges
*/


class EXCHConnector {
    EXCHConnector() {};
    static mutex mtx;
    static EXCHConnector* EXCHConnectorInstance;
public:
    static EXCHConnector* getEXCHConnector();

    //ideally, this function will receive a status/error code which will be passed back
    //to order executioner and it will update db and take other actions accordingly
    static void placeOrder(Order* order) {
        cout << "Order sent to Exchange " << endl;
    }
};
