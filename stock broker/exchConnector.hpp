#pragma once
#include "common.hpp"
#include "order.hpp"
#include <mutex>


class EXCHConnector {
    EXCHConnector() {};
    static mutex mtx;
    static EXCHConnector* EXCHConnectorInstance;
public:
    static EXCHConnector* getEXCHConnector();

    static void placeOrder(Order* order) {
        cout << "Order with these details sent to Exchange " << endl;
    }

};
