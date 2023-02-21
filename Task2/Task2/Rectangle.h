#pragma once
#include "Parallelogram.h"

class Rectangle : public Parallelogram {
public:
    Rectangle(std::string name, int numSides, int sideA, int sideB, int sideC, int sideD, int angleA, int angleB,
        int angleC, int angleD);
};
