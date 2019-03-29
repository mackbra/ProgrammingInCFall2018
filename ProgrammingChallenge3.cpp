/*A program that calculates the total cost of a $95 item
Mackenzie Branch
9/17/18*/

#include <iostream>
using namespace std;

int main()
{
	//declaring the different variables
	double stateTax = 6.5,
		fedTax = 2,
		total;
	int price = 95;


	//calculating the total price
	total = (price * (stateTax / 100)) + (price * (fedTax / 100)) + price;

	//displaying price, taxes, and total price
	cout << "The price is: $" << price << endl;
	cout << "State tax is: " << stateTax << "%\n";
	cout << "Federal tax is: " << fedTax << "%\n";
	cout << "The total price is: $" << total << endl;


	return 0;

}