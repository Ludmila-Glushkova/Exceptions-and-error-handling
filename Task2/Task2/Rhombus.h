#pragma once
#include "Parallelogram.h"

class Rhombus : public Parallelogram {
public:
    Rhombus(std::string name, int numSides, int sideA, int sideB, int sideC, int sideD, int angleA, int angleB,
        int angleC, int angleD);
};
