#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){

	string month1,
	month2,
	month3;

	double rain1,
		rain2,
		rain3,
		avgRain;

	cout << "Enter month 1: ";
	cin >> month1;

	cout << "Enter the rainfall (in inches) for month 1: ";
	cin >> rain1;

	cout << "Enter month 2: ";
	cin >> month2;

	cout << "Enter the rainfall (in inches) for month 2: ";
	cin >> rain2;

	cout << "Enter month 3: ";
	cin >> month3;

	cout << "Enter the rainfall (in inches) for month 3: ";
	cin >> rain3;

	avgRain = (rain1 + rain2 + rain3) / 3;

	cout << "The average rain fall for the months of " << month1 << " , " << month2 << " , " << month3 << " was " << setprecision(2) << avgRain << " inches.\n";

	return 0;

}