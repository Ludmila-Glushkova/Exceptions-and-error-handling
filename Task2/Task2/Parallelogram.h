#pragma once
#include "Quadrilateral.h"

class Parallelogram : public Quadrilateral {
public:
    Parallelogram(std::string name, int numSides, int sideA, int sideB, int sideC, int sideD, int angleA, int angleB,
        int angleC, int angleD);
};
