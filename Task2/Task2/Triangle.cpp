#include "Triangle.h"
#include "Exception.h"
#include <iostream>

Triangle::Triangle(std::string name, int numSides, int sideA, int sideB, int sideC,
    int angleA, int angleB, int angleC) : Figure(name) {
    this->numSides = numSides;
    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;
    this->angleA = angleA;
    this->angleB = angleB;
    this->angleC = angleC;

    if ((angleA + angleB + angleC) != 180)
    {
        std::string message = "Error when creating the shape. Reason: the sum of the angles is not equal to 180.";
        throw Except(message);
    }

    if (numSides != 3)
    {
        std::string message = "Error when creating the shape. Reason: the number of sides is not equal to three.";
        throw Except(message);
    }
}

void Triangle::sides() {
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
}

void Triangle::angles() {
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
}