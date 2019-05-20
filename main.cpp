#include <iostream>

float areaOfTri();
float areaOfSq();
float areaOfRec();
float areaOfCi();
float areaOfTra();
bool is_number(const std::string &s);

main()
{

	std::string in;

	float area;
	std::string shape;

	do
	{
		std::cout << "Press 1 to find area of a traingle\nPress 2 to find area of a Square\nPress 3 to find area of a rectangle\nPress 4 to find area of a circle\nPress 5 to find area of a trapezoid\nAny other key to quit" <<  std::endl;
		std::cin >> in;
		if(in.length()!=1)
		{
			std::cout << "Exiting program..." << std::endl; return(0);
		}

		switch(in.at(0))
		{
			case('1'):
			area = areaOfTri(); shape = "triangle"; break;
			case('2'):
			area = areaOfSq(); shape = "square"; break;
			case('3'):
			area = areaOfRec(); shape = "rectangle"; break;
			case('4'):
			area = areaOfCi(); shape = "circle"; break;
			case('5'):
			area = areaOfTra(); shape = "trapezoid"; break;
			default:
			std::cout << "Exiting program..." << std::endl; return(0);
		}

		std::cout << "Area of " << shape << " is " << area << "\n" << std::endl;

	}while(in.at(0)>'0' && in.at(0)<'6');
}

float areaOfTri()
{
	std::string base, height;
	
	do
	{
		std::cout << "Enter base:" << std::endl;
		std::cin >> base;
		if(!is_number(base))
		{
			std::cerr << "Please enter valid value!" << std::endl;
		}
	}while(!is_number(base));

	do
	{
		std::cout << "Enter height:" << std::endl;
		std::cin >> height;
		if(!is_number(height))
		{
			std::cerr << "Please enter valid value!" << std::endl;
		}
	}while(!is_number(height));

	return (stof(base)*stof(height))/2;
}

float areaOfSq()
{
	std::string side;

	do
	{
		std::cout << "Enter length of side:" << std::endl;
		std::cin >> side;
		if(!is_number(side))
		{
			std::cerr << "Please enter valid value!" << std::endl;
		}
	}while(!is_number(side));

	return stof(side)*stof(side);
}

float areaOfRec()
{
	std::string length, width;
	do
	{
		std::cout << "Enter length:" << std::endl;
		std::cin >> length;
		if(!is_number(length))
		{
			std::cerr << "Please enter valid value!" << std::endl;
		}
	}while(!is_number(length));

	do
	{
		std::cout << "Enter width:" << std::endl;
		std::cin >> width;
		if(!is_number(width))
		{
			std::cerr << "Please enter valid value!" << std::endl;
		}
	}while(!is_number(width));	

	return stof(length)*stof(width);
}

float areaOfCi()
{
	float PI=3.141592;
	std::string radius;

	do
	{
		std::cout << "Enter radius of the circle:" << std::endl;
		std::cin >> radius;
		if(!is_number(radius))
		{
			std::cerr << "Please enter valid value!" << std::endl;
		}
	}while(!is_number(radius));
	return PI*stof(radius)*stof(radius);
}

float areaOfTra()
{
	std::string base1,base2,height;

	do
	{
		std::cout << "Enter base 1:" << std::endl;
		std::cin >> base1;
		if(!is_number(base1))
		{
			std::cerr << "Please enter valid value!" << std::endl;
		}
	}while(!is_number(base1));

	do
	{
		std::cout << "Enter base 2:" << std::endl;
		std::cin >> base2;
		if(!is_number(base2))
		{
			std::cerr << "Please enter valid value!" << std::endl;
		}
	}while(!is_number(base2));

	do
	{
		std::cout << "Enter height:" << std::endl;
		std::cin >> height;
		if(!is_number(height))
		{
			std::cerr << "Please enter valid value!" << std::endl;
		}
	}while(!is_number(height));

	return (stof(base1)+stof(base2))*stof(height)/2;
}

bool is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}
