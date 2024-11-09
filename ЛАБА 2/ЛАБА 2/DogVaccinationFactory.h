// DogVaccinationFactory.h
#pragma once
#include "ServiceFactory.h"
#include "DogVaccination.h"

class DogVaccinationFactory : public ServiceFactory {
public:
    Service* createService() const override {
        return new DogVaccination();
    }
};
