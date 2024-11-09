// ExoticAnimalSurgeryFactory.h
#pragma once
#include "ServiceFactory.h"
#include "ExoticAnimalSurgery.h"

class ExoticAnimalSurgeryFactory : public ServiceFactory {
public:
    Service* createService() const override {
        return new ExoticAnimalSurgery();
    }
};