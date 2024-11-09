// ExoticAnimalSurgery.h
#pragma once
#include "Service.h"

class ExoticAnimalSurgery : public Service {
public:
    std::string provide() const override {
        return "Хірургія для екзотичної тварини проведена.";
    }
};
#pragma once
