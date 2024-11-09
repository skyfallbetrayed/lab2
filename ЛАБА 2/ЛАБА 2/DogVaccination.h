// DogVaccination.h
#pragma once
#include "Service.h"

class DogVaccination : public Service {
public:
    std::string provide() const override {
        return "Вакцинація собаки проведена.";
    }
};
