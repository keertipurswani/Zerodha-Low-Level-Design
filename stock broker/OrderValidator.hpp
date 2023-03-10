#pragma once
#include "order.hpp"
#include "system.hpp"

//This class has access to user details
//It's responsibility is to check if user can place the order or not
//For demo purposes it returns true 
//It should be checking if user has enough funds/stocks for the buy/sell order

class OrderValidator {
public:
	bool ValidateOrder(string userId, Order* order) {
		User* user = System::getUser(userId);
		if (order->getTxnType() == TXN_TYPE::BUY) {
			cout << "Checking if user " << user->getUserId() << " has enough funds to buy " << endl;
			cout << " For now, let's assume user is a good person and return true" << endl;
		}
		else {
			cout << "Checking if user " << userId << " has enough stocks to sell in portfolio " << endl;
			cout << " For now, let's assume user is a good person and return true" << endl;
		}
		return true;
	}
};