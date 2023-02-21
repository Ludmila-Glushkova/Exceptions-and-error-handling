#include "Rhombus.h"
#include <iostream>

Rhombus::Rhombus(std::string name, int numSides, int sideA, int sideB, int sideC, int sideD, int angleA, int angleB,
    int angleC, int angleD) : Parallelogram(name, numSides, sideA, sideB, sideC, sideD, angleA, angleB,
        angleC, angleD)
{
    if (sideA != sideC || sideA != sideB || sideA != sideD)
    {
        std::string message = "Error when creating the shape. Reason: the sides are not equal";
        throw Except(message);
    }

    if (angleA != angleC || angleB != angleD)
    {
        std::string message = "Error when creating the shape. Reason: angle A is not equal to angle C or angle B is not equal to angle D";
        throw Except(message);
    }
}
