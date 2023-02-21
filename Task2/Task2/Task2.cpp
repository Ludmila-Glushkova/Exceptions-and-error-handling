#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

void print(Figure& fig) {
    fig.print();
    std::cout << std::endl;
    std::cout << std::endl;
}

int main()
{
	try
	{
		std::cout << "Creating a triangle with two sides." << std::endl;
		Triangle tr("Triangle", 2, 3, 4, 5, 30, 90, 60);
		print(tr);
	}
	catch (Except& message)
	{
		std::cout << message.what() << std::endl << std::endl;

	}
	try
	{
		std::cout << "Creating a right triangle." << std::endl;
		RightTriangle tr("RightTriangle", 3, 3, 4, 5, 30, 60, 90);
		print(tr);
	}
	catch (Except& message)
	{
		std::cout << message.what() << std::endl << std::endl;
	}
	try
	{
		std::cout << "Creating an isosceles triangle with all angles different." << std::endl;
		IsoscelesTriangle tr("IsoscelesTriangle", 3, 3, 3, 3, 30, 60, 90);
		print(tr);
	}
	catch (Except& message)
	{
		std::cout << message.what() << std::endl << std::endl;
	}
	try
	{
		std::cout << "Creating an equilateral triangle." << std::endl;
		EquilateralTriangle tr("EquilateralTriangle", 3, 3, 3, 3, 60, 60, 60);
		print(tr);
	}
	catch (Except& message)
	{
		std::cout << message.what() << std::endl << std::endl;
	}
	try
	{
		std::cout << "Creating a quadrilateral with angles: 90, 100, 100, 100." << std::endl;
		Quadrilateral q("Quadrilateral", 4, 1, 2, 3, 4, 90, 100, 100, 100);
		print(q);
	}
	catch (Except& message)
	{
		std::cout << message.what() << std::endl << std::endl;
	}
	try
	{
		std::cout << "Creating a rectangle." << std::endl;
		Rectangle q("Rectangle", 4, 3, 2, 3, 2, 90, 90, 90, 90);
		print(q);
	}
	catch (Except& message)
	{
		std::cout << message.what() << std::endl << std::endl;
	}
	try
	{
		std::cout << "Creating a square with sides: 3, 3, 3, 2." << std::endl;
		Square q("Square", 4, 3, 3, 3, 2, 90, 90, 90, 90);
		print(q);
	}
	catch (Except& message)
	{
		std::cout << message.what() << std::endl << std::endl;
	}
	try
	{
		std::cout << "Creating a parallelogram." << std::endl;
		Parallelogram q("Parallelogram", 4, 3, 2, 3, 2, 60, 120, 60, 120);
		print(q);
	}
	catch (Except& message)
	{
		std::cout << message.what() << std::endl << std::endl;
	}
	try
	{
		std::cout << "Creating a rhombus with angles: 60, 110, 60, 110." << std::endl;
		Rhombus q("Rhombus", 4, 3, 2, 3, 2, 60, 110, 60, 110);
		print(q);
	}
	catch (Except& message)
	{
		std::cout << message.what() << std::endl << std::endl;
	}
}

