#pragma once
#include <iostream>
#include <vector>
using namespace std;


enum class ORDER_STATUS {
    OPEN,
    PARTIALLY_DONE,
    DONE,
    CANCELLED,
};

enum class ORDER_TYPE {
    LIMIT,      // set a price - while buying - prive is moving down. set a price. if goes below this, buy (so it will happen at lower price than curr market price & at price equal or lower than mentioned)
                // while selling - if goes above this then sell (price higher than curr market price & will happen at euql or greater than mentioned val)
    MARKET,     //immediately at curr market price 
};

enum class TXN_TYPE {
    BUY,
    SELL
};

enum class EXCH {
    NSE,
    BSE
};
