#include "EquilateralTriangle.h"
#include <iostream>

EquilateralTriangle::EquilateralTriangle(std::string name, int numSides, int sideA, int sideB, int sideC,
    int angleA, int angleB, int angleC) : IsoscelesTriangle(name, numSides, sideA, sideB, sideC,
        angleA, angleB, angleC)
{
    if (sideA != sideB || sideA != sideC || sideB != sideC)
    {
        std::string message = "Error when creating the shape. Reason: the sides are not equal.";
        throw Except(message);
    }

    if (angleA != 60 || angleB != 60 || angleC != 60)
    {
        std::string message = "Error when creating the shape. Reason: the angles are not equal to 60.";
        throw Except(message);
    }
}
