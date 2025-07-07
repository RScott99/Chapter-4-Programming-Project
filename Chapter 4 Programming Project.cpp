//Should be able to use three geometrical formulas to answer questions that can be selected via
//inputting the a number 1-4 (4 to quit), and then validate that there are no numbers outside of 1-4
//and that there are no negative numbers for the circle's radius, rect. len./wid., or the triang's base/height.
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	//initializing variables
	int choice;

	double area, base, height, length, width, radius, pi = 3.14159;

	//displaying menu
	std::cout << "Geometry Calculator\n";
	std::cout << "    1. Calculate the Area of a Circle\n";
	std::cout << "    2. Calculate the Area of a Rectangle\n";
	std::cout << "    3. Calculate the Area of a Triangle\n";
	std::cout << "    4. Quit\n";
	std::cout << "Enter your choice (1-4): ";
	cin >> choice;

	//setting precision of decimals
	std::cout << fixed << setprecision(2);

	switch (choice) {//selecting which formula
	case 1://area of a circle
		//querying the radius
		std::cout << "Enter the radius of the circle: ";
		cin >> radius;
		//validating radius is positive
		if (radius < 0) {
			std::cout << "Radius must be positive.\n";
		} else {
			// finding & outputting area of circle
			area = pi * pow(radius, 2);
			std::cout << "Area of the circle: " << area << endl;
		}
		break;
	
	case 2://area of a rectangle
		//querying the length & width
		std::cout << "Enter the length of the rectangle: ";
		std::cin >> length;
		std::cout << "Enter the width of the rectangle: ";
		std::cin >> width;
		//validating length & width
		if (length < 0 || width < 0) {
			std::cout << "Lenght & width must be positive.\n";
		} else {//calculating & outputting the area
			area = length * width;
			std::cout << "Area of the rectangle: " << area << endl;
		}
		break;
	
	case 3://area of a triangle
		//querying triangle base & height
		std::cout << "Enter the base of the triangle: ";
		std::cin >> base;
		std::cout << "Enter the height of the triangle: ";
		std::cin >> height;
		//validating base&height
		if (base < 0 || height < 0) {
			std::cout << "Base and height must be positive." << endl;
		} else { //calculating and outputting area of triangle
			area = 0.5 * base * height;
			std::cout << "Area of the triangle: " << area << endl;
		}
		break;
	
	case 4://quit
		std::cout << "Quitting the program..." << endl;
		break;
	default://invalid
		std::cout << "Please enter a valid number (1-4).\n";
	}

	return 0;
}
