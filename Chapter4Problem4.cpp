#include <iostream>
#include<iomanip>
using namespace std;

int main()
{

	int length1,
		length2,
		width1,
		width2,
		area1,
		area2;

	cout << "Enter the length of the first rectangle: ";
	cin >> length1;
	cout << "Enter the width of the first rectangle: ";
	cin >> width1;

	cout << "Enter the length of the second rectangle: ";
	cin >> length2;
	cout << "Enter the width of the second rectangle: ";
	cin >> width2;

	area1 = length1 * width1;
	area2 = length2 * width2;

	cout << "The area of the first rectangle is " << area1 << " units squared\n";
	cout << "The area of the second rectangle is " << area2 << " units squared\n";

	if (area1 > area2)
		cout << "The first rectangle has a larger area\n";

	else if (area2 > area1)
		cout << "The second rectangle has a larger area\n";

	else if (area1 == area2)
		cout << "The rectangles have the same area\n";

	return 0;
}