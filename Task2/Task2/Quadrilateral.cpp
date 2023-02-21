#include "Quadrilateral.h"
#include <iostream>

Quadrilateral::Quadrilateral(std::string name, int numSides, int sideA, int sideB, int sideC, int sideD, int angleA, int angleB,
    int angleC, int angleD) : Figure(name){
    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;
    this->sideD = sideD;
    this->angleA = angleA;
    this->angleB = angleB;
    this->angleC = angleC;
    this->angleD = angleD;
    this->numSides = numSides;

    if ((angleA + angleB + angleC + angleD) != 360)
    {
        std::string message = "Error when creating the shape. Reason: the sum of the angles is not equal to 360";
        throw Except(message);
    }

    if (numSides != 4)
    {
        std::string message = "Error when creating the shape. Reason: the number of sides is not equal to 4.";
        throw Except(message);
    }
}

void Quadrilateral::angles() {
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
}

void Quadrilateral::sides() {
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
}