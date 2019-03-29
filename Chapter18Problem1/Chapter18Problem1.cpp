//A program that creates a stack of characters and illustrates pushing and popping
//Mackenzie Branch
//CSci 1120-51
//12-7-18

#include "Header.h"
#include <iostream>
using namespace std;

//Constructor
CharStack::CharStack(int capacity)
{
	stackArray = make_unique<char []>(capacity);
	this->capacity = capacity;
	top = 0;
}

//Push function... adds to the stack
void CharStack::push(char value)
{
	if (top == capacity) throw CharStack::Overflow();
	stackArray[top] = value;
	top++;
}

//Is empty... prevents underflow
bool CharStack::isEmpty() const
{
	return top == 0;
}

//Pop function... takes away from the stack
void CharStack::pop(char &value)
{
	if (isEmpty()) throw CharStack::Underflow();
	top--;
	value = stackArray[top];
}

int main()
{
	//Declaring a stack of 5 and an array of characters
	CharStack stack(5);
	char values[] = { 'a', 'b', 'c', 'd', 'e' };
	char value;

	//Pushing the array of characters into the stack
	cout << "Pushing...\n" << endl;
	for (int k = 0; k < 5; k++)
	{
		cout << values[k] << " ";
		stack.push(values[k]);
	}

	//Popping the array of characters from the stack
	cout << "\nPopping...\n" << endl;
	while (!stack.isEmpty())
	{
		stack.pop(value);
		cout << value << " ";
	}
	cout << endl;


	return 0;

}