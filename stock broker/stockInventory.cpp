#include "stockInventory.hpp"

void StockInventory::AddStock(string pName, Stock* pStock)
{
	StockInventory::stocksMap[pName] = pStock;
}
