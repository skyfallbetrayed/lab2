// CatCheckup.h
#pragma once
#include "Service.h"

class CatCheckup : public Service {
public:
    std::string provide() const override {
        return "Обстеження кота проведено.";
    }
};
#pragma once
