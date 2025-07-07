//This code is intended to take a month in number form (1-12), and a year to find how many days would be in said month during that year
#include <iostream>
using namespace std;
int main()
{
	//initializing variables
	int month, year, days;
	
	bool isLeapYear;

	//querying a month
	std::cout << "Enter a month (1-12): ";
	std::cin >> month;
	
	if (month < 1 || month > 12) { //validating the month
		std::cout << "\nPlease enter a number between 1 and 12." << endl;
		return 0;
	}

	//querying a year
	std::cout << "\nEnter a year: ";
	std::cin >> year;

	//calculating if the year is a leap year
	if (year % 100 == 0) {
		if (year % 400 == 0) {
			isLeapYear = true;
		} else {
			isLeapYear = false;
		}
	}
	else {
		if (year % 4 == 0) {
			isLeapYear = true;
		} else { 
			isLeapYear = false;
		}
	}

	//assigning the number of days
	if (month == 2) { //feb
		days = (isLeapYear) ? 29 : 28;
	} else {
		switch (month) {
		case 4: case 6: case 9: case 11: //april/june/sept/nov
			days = 30;
			break;
		default: //jan/march/may/july/aug/oct/dec
			days = 31;
		}
	}

	//Outputting days
	std::cout << "\n" << days << " days" << endl;

	return 0;
}
