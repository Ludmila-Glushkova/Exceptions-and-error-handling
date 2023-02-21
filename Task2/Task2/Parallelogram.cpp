#include "Parallelogram.h"
#include <iostream>

Parallelogram::Parallelogram(std::string name, int numSides, int sideA, int sideB, int sideC, int sideD, int angleA, int angleB,
    int angleC, int angleD) : Quadrilateral(name, numSides, sideA, sideB, sideC, sideD, angleA, angleB,
        angleC, angleD)
{
    if (sideA != sideC || sideB != sideD)
    {
        std::string message = "Error when creating the shape. Reason: side A is not equal to side C or side B is not equal to side D";
        throw Except(message);
    }

    if (angleA != angleC || angleB != angleD)
    {
        std::string message = "Error when creating the shape. Reason: angle A is not equal to angle C or angle B is not equal to angle D";
        throw Except(message);
    }
}
