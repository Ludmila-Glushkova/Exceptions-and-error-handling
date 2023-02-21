#pragma once
#include "Exception.h"
#include <string>

class Figure {
private:
    std::string name;

protected:
    Figure(std::string name);

    virtual void sides();

    virtual void angles();

public:
    void print();
};