#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

	string player;

	double atBat,
		hits,
		avg;



	cout << "Enter player name: ";
	cin >> player;

	cout << "Enter the number of times player was at bat: ";
		cin >> atBat;

		cout << "Enter how many hits player made: ";
		cin >> hits;

		avg = hits / atBat;

		cout << "Player: " << player << endl;
		cout << "Batting Average: " << setprecision(4) << avg << endl;


		return 0;



}