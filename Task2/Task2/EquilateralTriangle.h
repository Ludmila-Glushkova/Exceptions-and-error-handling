#pragma once
#include "IsoscelesTriangle.h"

class EquilateralTriangle : public IsoscelesTriangle {
public:
    EquilateralTriangle(std::string name, int numSides, int sideA, int sideB, int sideC,
        int angleA, int angleB, int angleC);
};
