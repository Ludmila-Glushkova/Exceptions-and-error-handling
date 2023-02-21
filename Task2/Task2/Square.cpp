#include "Square.h"
#include <iostream>

Square::Square(std::string name, int numSides, int sideA, int sideB, int sideC, int sideD, int angleA, int angleB,
    int angleC, int angleD) : Rectangle(name, numSides, sideA, sideB, sideC, sideD, angleA, angleB,
        angleC, angleD)
{
    if (sideA != sideC || sideA != sideB || sideA != sideD)
    {
        std::string message = "Error when creating the shape. Reason: the sides are not equal";
        throw Except(message);
    }

    if (angleA != 90 || angleB != 90 || angleC != 90 || angleD != 90)
    {
        std::string message = "Error when creating the shape. Reason: the angles are not equal to 90";
        throw Except(message);
    }
}
