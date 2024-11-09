// CatCheckupFactory.h
#pragma once
#include "ServiceFactory.h"
#include "CatCheckup.h"

class CatCheckupFactory : public ServiceFactory {
public:
    Service* createService() const override {
        return new CatCheckup();
    }
};
#pragma once
