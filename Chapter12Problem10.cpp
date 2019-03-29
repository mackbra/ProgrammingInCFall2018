//A program that asks for a password and then verifies
//that it meets the criteria.
//Mackenzie Branch
//CSci 1120-51
//11-12-18
#include <iostream>
#include <cstring>
using namespace std;

//Function Prototypes
 bool isLength(char[]);
 bool isUpper(const char *strPtr);
 bool isLower(const char *strPtr);
 bool isDigit(const char *strPtr);

int main()
{

	const int PASSWORD_LENGTH = 21;
	char password[PASSWORD_LENGTH];

	//Set parameters for a password and get the user's input
	cout << "Create a password\n";
	cout << "   --Password must be between 6-20 characters in length\n";
	cout << "   --Should contain at least one upper case and one lower case letter\n";
	cout << "   --Must include at least one digit\n";
	cin.getline(password, PASSWORD_LENGTH);

	//If any of the functions return false, list the error message
	if (isLength(password) == false)
		cout << "ERROR: Password must be 6-20 characters in length\n";
	if (isUpper(password) == false)
		cout << "ERROR: password must contain at least one upper case letter\n";
	if (isLower(password) == false)
		cout << "ERROR: password must contain at least one lower case letter\n";
	if(isDigit(password) == false)
		cout << "ERROR: Password must contain at least one digit\n";


	//If all functions are true, the password has been saved.
	if (isLength(password) == true && isUpper(password) == true && isLower(password) == true && isDigit(password) == true)
	{
		cout << "You entered: " << password << endl;
		cout << "Your password has been saved";
	}

	system("pause");

	return 0;
}

//Function to check for the passwords length
bool isLength(char line [])
{
	bool status = true;
	int length = strlen(line);

	if (length < 6 || length > 20)
	{

		status = false;
	}

	return status;
}


//Function to check for uppercase letters
bool isUpper(const char *strPtr)
{
	bool status = true;
	int upper = 0;

	while (*strPtr != '\0')
	{
		if (*strPtr > 64 && *strPtr < 91)
			upper++;
		strPtr++;
	}

	if (upper == 0)
	{
		status = false;
	}

	return status;

}

//Function to check for lowercase letters
	bool isLower(const char *strPtr)
	{

		bool status = true;
		int lower = 0;

	while (*strPtr != '\0')
	{
		if (*strPtr > 96 && *strPtr < 123)
			lower++;
		strPtr++;
	}

	if (lower == 0)
	{
		status = false;
	}

	return status;

}

//Function to check for a digit
bool isDigit(const char *strPtr)
{
	bool status = true;
	int digit = 0;

	while (*strPtr != '\0')
	{
		if (*strPtr > 47 && *strPtr < 58)
			digit++;
		strPtr++;
	}

	if (digit == 0)
	{

		status = false;
	}

	return status;
}