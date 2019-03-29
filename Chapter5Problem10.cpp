//This program calculates how many calories are burned while on a treadmill for 5, 10, 15,  20, 25, & 30 minutes
#include <iostream>
using namespace std;

int main()
{
	const double calories = 3.9; //creating the variable for calories
	double min = 5;				//and the initial time on the treadmill

	while (min <= 30)
	{
		cout << calories * min << " total calories burned in " << min << " minutes.\n"; //a cout statement that multiplies minutes times calories to get 
			min+= 5;																	//how many calories were burned
	}


	return 0;
}