#include "Stack.h"

int main() {
	Stack stack;
	string msg;

	cout << "Input your string: ";
	cin >> msg;


	do
	{
		cin >> element;
		if (element != 0) {
			stack.push(element);
		}
	} while (element != 0);

	stack.pop;
	stack.pop;
	stack.pop;

	cout << "Current stack: " << stack.toString() << endl;

	return 0;
}