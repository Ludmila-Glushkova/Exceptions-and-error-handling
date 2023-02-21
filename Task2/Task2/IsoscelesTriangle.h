#pragma once
#include "Triangle.h"

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(std::string name, int numSides, int sideA, int sideB, int sideC,
        int angleA, int angleB, int angleC);
};
