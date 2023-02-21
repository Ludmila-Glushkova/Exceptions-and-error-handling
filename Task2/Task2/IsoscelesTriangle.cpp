#include "IsoscelesTriangle.h"
#include <iostream>

IsoscelesTriangle::IsoscelesTriangle(std::string name, int numSides, int sideA, int sideB, int sideC,
    int angleA, int angleB, int angleC) : Triangle(name, numSides, sideA, sideB, sideC,
        angleA, angleB, angleC)
{
    if (sideA != sideA)
    {
        std::string message = "Error when creating the shape. Reason: side A is not equal to side C.";
        throw Except(message);
    }

    if (angleA != angleC)
    {
        std::string message = "Error when creating the shape. Reason: angle A is not equal to angle C.";
        throw Except(message);
    }
}
