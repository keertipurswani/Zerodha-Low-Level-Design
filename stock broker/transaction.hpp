#pragma once
//We didn't implement this class. This is to point out that order 
//is comprised of multiple transactions.
//If user is selling 100 stocks, 30 might go to user2 but 70 might go to user3.
//Exchange will do the transactions and send back details which we will show in tradebook
class Transaction {
	//users
	//order id
	time_t txnTime;
	int Quantity;
	double price;
public:
	//CreateTransaction() 
};