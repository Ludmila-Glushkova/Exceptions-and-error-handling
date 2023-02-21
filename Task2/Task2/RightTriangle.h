#pragma once
#include "Triangle.h"

class RightTriangle : public Triangle {
public:
    RightTriangle(std::string name, int numSides, int sideA, int sideB, int sideC,
        int angleA, int angleB, int angleC);
};
