// ServiceFactory.h
#pragma once
#include "Service.h"

class ServiceFactory {
public:
    virtual ~ServiceFactory() {}
    virtual Service* createService() const = 0;
};
#pragma once
