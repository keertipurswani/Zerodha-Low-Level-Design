#pragma once
#include "order.hpp"
#include "exchConnector.hpp"
//Responsibility of this class is the send the order to EXCHConnector,
//based on the status/error code received, there would be a callback in this class
//callback would update the order status, transactions and db

class OrderExecutioner {
public:
	void ExecuteOrder(Order* order) {
		static EXCHConnector* exchConnector = EXCHConnector::getEXCHConnector();
		exchConnector->placeOrder(order);
	}
};