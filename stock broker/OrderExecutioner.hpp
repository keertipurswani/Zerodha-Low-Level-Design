#pragma once
#include "order.hpp"
#include "exchConnector.hpp"

class OrderExecutioner {
public:
	void ExecuteOrder(Order* order) {
		static EXCHConnector* exchConnector = EXCHConnector::getEXCHConnector();
		exchConnector->placeOrder(order);
	}
};