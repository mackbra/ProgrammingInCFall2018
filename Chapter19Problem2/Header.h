#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//creating the binary tree to store the employee information
class EmpBinaryTree
{
private:
	class EmployeeInfo
	{
		friend class EmpBinaryTree;
		int empID;
		string name;
		EmployeeInfo *left;
		EmployeeInfo *right;
		EmployeeInfo(int empID1, string name1,
			EmployeeInfo *left1 = nullptr,
			EmployeeInfo *right1 = nullptr)
		{
			empID = empID1;
			name = name1;
			left = left1;
			right = right1;
		}
	};

	EmployeeInfo *root;

	void insert(int, string, EmployeeInfo *&);
	string search(int, EmployeeInfo*);
	
public:
	EmpBinaryTree()
	{
		root = nullptr;
	}
	void insert(int num, string name)
	{
		insert(num, name, root);
	}
	
	string search(int num)
	{
		return search(num, root);
	}
	
};
#endif
