#include "RightTriangle.h"
#include <iostream>

RightTriangle::RightTriangle(std::string name, int numSides, int sideA, int sideB, int sideC,
    int angleA, int angleB, int angleC) : Triangle(name, numSides, sideA, sideB, sideC,
        angleA, angleB, angleC)
{
    if (angleC != 90)
    {
        std::string message = "Error when creating the shape. Reason: angle C is not equal to 90.";
        throw Except(message);
    }
}
