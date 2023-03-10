#include "order.hpp"
#include "OrderValidator.hpp"
#include "OrderExecutioner.hpp"

//This is first place where placeOrder hits, 
//It manages the validation and execution process

class OrderMgr {
	OrderValidator* validator;
	OrderExecutioner* executioner;
public:
	OrderMgr() {
		validator = new OrderValidator();
		executioner = new OrderExecutioner();
	}
	void PlaceOrder(string userId, Order* order) {
		if (validator->ValidateOrder(userId, order)) {
			executioner->ExecuteOrder(order);
		}
		else {
			cout << "Can't execute the order" << endl;
		}
	}
};