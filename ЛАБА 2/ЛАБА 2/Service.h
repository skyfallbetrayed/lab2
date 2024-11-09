// Service.h
#pragma once
#include <string>

class Service {
public:
    virtual ~Service() {}
    virtual std::string provide() const = 0;
};
