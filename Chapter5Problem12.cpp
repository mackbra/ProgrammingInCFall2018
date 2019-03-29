// A random number guessing game, where the user has to guess which number the computer is thinking of
//between 1-100
 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
	unsigned seed;   //creating a seed for the random number

	seed = time(0);   //assiging the seed to "time" so it will be random every time
	srand(seed);

	int number,
		guess;


		number = rand() % 100 + 1;  //setting the parameters for the random number between 1 and 100


	cout << "Let's play a game. \n";
	cout << "I'm thinking of a number between 1 and 100. \n";
	cout << "Can you guess what it is? \n";
	cin >> guess;

	while (guess != number)           //what to display if the user DOES NOT guess the correct number
	{                                 //creating the loop to prompt the user to keep guessing
		while (guess > number)
		{
			cout << "Too high, try again. \n";
			cin >> guess;
		}

		while (guess < number)
		{
			cout << "Too low, try again. \n";
			cin >> guess;
		}

	}

	//what to display when the user guesses the number correctly

	cout << "Congratulations! You figured out my number! \n";

	return 0;
}

