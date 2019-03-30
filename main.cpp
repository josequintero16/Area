#include <iostream>

float areaOfTri();
float areaOfSq();
float areaOfRec();
float areaOfCi();

main()
{

	char in;

	float area;
	std::string shape;

	do
	{
		std::cout << "Press 1 to find area of a traingle\nPress 2 to find area of a Square\nPress 3 to find area of a rectangle\nPress 4 to find area of a circle\nAny other key to quit" <<  std::endl;
		std::cin >> in;
		switch(in)
		{
			case('1'):
			area = areaOfTri(); shape = "triangle"; break;
			case('2'):
			area = areaOfSq(); shape = "square"; break;
			case('3'):
			area = areaOfRec(); shape = "rectangle"; break;
			case('4'):
			area = areaOfCi(); shape = "circle"; break;
			default:
			std::cout << "Exiting program..." << std::endl; return(0);
		}

		std::cout << "Area of " << shape << " is " << area << "\n" << std::endl;

	}while(in>'0' && in<'5');
}

float areaOfTri()
{
	float base, height;

	std::cout << "Enter base:" << std::endl;
	std::cin >> base;

	std::cout << "Enter height:" << std::endl;
	std::cin >> height;	

	return (base*height)/2;
}

float areaOfSq()
{
	float s;

	std::cout << "Enter length of side:" << std::endl;
	std::cin >> s;

	return s*s;
}

float areaOfRec()
{
	float length, width;

	std::cout << "Enter length:" << std::endl;
	std::cin >> length;

	std::cout << "Enter width:" << std::endl;
	std::cin >> width;	

	return length*width;
}

float areaOfCi()
{
	float r,PI=3.141592;

	std::cout << "Enter radius of the circle:" << std::endl;
	std::cin >> r;

	return PI*r*r;
}
