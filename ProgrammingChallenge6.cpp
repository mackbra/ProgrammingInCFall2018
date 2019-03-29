/*A program that calculates how many miles a car can go on one tank of gas*/


#include <iostream>
using namespace std;

int main()
{
	int tank = 20;
	double townMPG = 23.5,
		hghwyMPG = 28.90,
		totalTown,
		totalHghwy;

	totalTown = tank * townMPG;
	totalHghwy = tank * hghwyMPG;

	cout << "On a " << tank << " gallon tank, you can drive " << totalTown << " miles in town\n";
	cout << "or you can drive " << totalHghwy << " miles on the highway\n";

	return 0;
}