#include <memory>
using namespace std;

class CharStack
{
	unique_ptr<char []>stackArray;
	int capacity;
	int top;
public:
	CharStack(int capacity);

	void push(char value);
	void pop(char &value);
	bool isEmpty() const;

	class Overflow {};
	class Underflow{};
};