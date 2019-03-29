//A program that stores employee info in a binary tree. It prompts the user to enter the 
//Employee ID and searches for the name of the corresponding employee
//Mackenzie Branch
//12-7-18
//CSci 1120-51

#include <iostream>
#include "header.h"
#include <string>
using namespace std;


//Creating the method that will insert the employee information
void EmpBinaryTree::insert(int num, string name, EmployeeInfo *&tree)
{
	if (!tree)
	{
		tree = new EmployeeInfo(num, name);

		return;
	}

	if (num == tree->empID)
		return;
	else if (num < tree->empID)
		insert(num, name, tree->left);
	else
		insert(num, name, tree->right);
}

//A method to search the binary tree
string EmpBinaryTree::search(int num, EmployeeInfo *tree)
{
	if (tree)
	{
		if (num == tree->empID)
			return tree->name;
		else if (num < tree->empID)
			return search(num, tree->left);
		else
			return search(num, tree->right);
	}
	return "Error";
}


int main()
{
	EmpBinaryTree tree;
	string result;
	int input;


	//Inserting employee information into the tree
	tree.insert(1021, "John Williams");
	tree.insert(1057, "Bill Witherspoon");
	tree.insert(2487, "Jennifer Twain");
	tree.insert(3769, "Sophia Lancaster");
	tree.insert(1017, "Debbie Reece");
	tree.insert(1275, "George McMullen");
	tree.insert(1899, "Ashley Smith");
	tree.insert(4218, "Josh Plemmons");


	//Prompt the user to enter an employee ID and then search for the corresponding employee name
	do
	{
		cout << "\nEnter Employee ID\n";
		cout << "or press 0 to quit\n";
		cin >> input;

		if (input != 0)
		{
			result = tree.search(input);
			if (result == "Error")
				cout << result << ": Employee not found\n";
			else
				cout << input << " " << result << endl;
		}
	}

	while (input != 0);

	return 0;
}
