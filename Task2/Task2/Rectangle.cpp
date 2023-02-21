#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(std::string name, int numSides, int sideA, int sideB, int sideC, int sideD, int angleA, int angleB,
    int angleC, int angleD) : Parallelogram(name, numSides, sideA, sideB, sideC, sideD, angleA, angleB,
        angleC, angleD)
{
    if (sideA != sideC || sideB != sideD)
    {
        std::string message = "Error when creating the shape. Reason: side A is not equal to side C or side B is not equal to side D";
        throw Except(message);
    }

    if (angleA != 90 || angleB != 90 || angleC != 90 || angleD != 90)
    {
        std::string message = "Error when creating the shape. Reason: the angles are not equal to 90";
        throw Except(message);
    }
}
