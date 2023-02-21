#pragma once
#include "Rectangle.h"

class Square : public Rectangle {
public:
    Square(std::string name, int numSides, int sideA, int sideB, int sideC, int sideD, int angleA, int angleB,
        int angleC, int angleD);
};
