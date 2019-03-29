#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double PI = 3.14159;

	double radius,
		length,
		width,
		height;

	int choice;

	cout << "Geometry Calculator\n";
	cout << "\n 1. Calculate the  Area of a Circle\n";
	cout << " 2. Calculate the Area of a Rectangle\n";
	cout << " 3. Calculate the Area of a Triangle\n";
	cout << " 4. Quit\n";
	cout << "Enter a selection\n";
	cin >> choice;

	if (choice == 1) {
		cout << "Enter the radius: ";
		cin >> radius;
		if (radius > 0)
			cout << "The area is " << radius * PI;
		else
			cout << "That is not a valid input. Please try again.";
	}

	else if (choice == 2) {
		cout << "Enter the length: ";
		cin >> length;
		cout << "Enter the width: ";
		cin >> width;
		if (length > 0 && width > 0)
			cout << "The area is " << length * width;
		else
			cout << "That is not a valid input. Please try again.";
	}

	else if (choice == 3) {
		cout << "Enter the length: ";
		cin >> length;
		cout << "Enter the width: ";
		cin >> width;
		if (length > 0 && width > 0)
			cout << "The area is " << (length * width) / 2;
		else
			cout << "That is not a valid input. Please try again.";
	}

	else if (choice != 4) {
		cout << "Invalid. Please re-run the program\n";
		cout << "and make a selection between 1 and 4";
	}

		return 0;

}