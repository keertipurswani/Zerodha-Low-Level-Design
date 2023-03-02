#include "exchConnector.hpp"
EXCHConnector* EXCHConnector::EXCHConnectorInstance = nullptr;
mutex EXCHConnector::mtx;


EXCHConnector* EXCHConnector::getEXCHConnector() {
    if (EXCHConnectorInstance == nullptr) {
        mtx.lock();
        if (EXCHConnectorInstance == nullptr)
            EXCHConnectorInstance = new EXCHConnector();
        mtx.unlock();
    }
    return EXCHConnectorInstance;
 }

