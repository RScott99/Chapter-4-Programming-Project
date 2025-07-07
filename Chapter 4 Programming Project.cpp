//Takes the weight of a package and the distance to be shipped, and calculates the charges
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	//initilizing variables
	double weight, distance;

	double finalCharge, rate;

	//querying weight
	std::cout << "Enter weight of package (in Kilograms): ";
	std::cin >> weight;

	//validating weight
	if (weight < 0 || weight > 20) {
		std::cout << "\nPlease enter a weight between 0 and 20kg.";
		return 0;
	}

	//querying distance
	std::cout << "\nEnter how many miles to ship: ";
	std::cin >> distance;

	//validating distance
	if (distance < 10 || distance > 3000) {
		std::cout << "\nPlease enter a distance between 10 and 3000 miles.";
		return 0;
	}

	rate = 0.0;
	if (weight <= 2) {
		rate = 1.10;
	} else if (weight <= 6) {
		rate = 2.20;
	} else if (weight <= 10) {
		rate = 3.70;
	} else {
		rate = 4.80;
	}

	//find how many distances of 500-miles there are.
	//rounded up
	int roundUnits = ceil(distance / 500.0);

	//finding the total charge
	finalCharge = roundUnits * rate;

	//setting decimal precision
	std::cout << fixed << setprecision(2);
	//displaying final charge
	std::cout << "\nCost of shipping: $" << finalCharge << endl;

	return 0;
}
