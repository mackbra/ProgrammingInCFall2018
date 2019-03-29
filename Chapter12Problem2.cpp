//A program that counts how many words a user enters and returns the average number of letters in each word
//Mackenzie Branch
//CSci 1120-51
//11-12-18
#include <iostream>
#include <cstring>
using namespace std;

//Function prototype
int wordCount(const char *strPtr);
int letterCount(const char *strPtr);

int main()
{
	//creating a generic array for the sentence to go in to
	const int BIG_LONG = 100;
	char sentence[BIG_LONG];
	int totalCount;
	int avgLetters;

	//get user input
	cout << "Enter a sentence and I will tell you how many words are in it:\n";
	cin.getline(sentence, BIG_LONG);

	//calculate how many words in a sentence by adding 1 to the total number of spaces
	totalCount = wordCount(sentence) + 1;
	//calculaate the average letters per word by adding up all the characters and dividing by how many words there are
	avgLetters = letterCount(sentence) / totalCount;


	//display our findings
	cout << "There are " << totalCount << " words in that sentence,\n";
	cout << "with an average of " << avgLetters << " letters per word.\n";

		return 0;
}

//counts how many spaces there are in the sentence
int wordCount(const char *strPtr)
{
	int count = 0;

	while (*strPtr != '\0')
	{
		if (*strPtr == 32)
			count++;
		strPtr++;

	}
	return count;
}

//counts how many characters there are that are NOT spaces
int letterCount(const char *strPtr)
{
	int count = 0;

	while (*strPtr != '\0')
	{
		if (*strPtr != 32)
			count++;
		strPtr++;
	}

	return count;

}