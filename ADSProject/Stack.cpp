#include "Stack.h"


Stack::Stack() {

}
Stack::~Stack() {
	clear();
}

void Stack::push(int element) {
	if (isEmpty()) {
		size = 1;
		stack = new int[size];
		stack[0] = element;
	}
	else {
		int* temp = new int[size + 1];
		for (int i = 0; i < size; i++)
		{
			temp[i] = stack[i];
		}
		temp[size] = element;
		size++;
		delete[] stack;
		size = 0;
	}
}
int Stack::pop() {
	if (isEmpty()) {
		return 0;
	}

	int element = stack[size - 1];

	size--;
	int* temp = new int[size - 1];

	for (int i = 0; i < size; i++)
	{
		temp[i] = stack[i];
	}
	delete[] stack;
	stack = temp;

	return element;
}
int Stack::peek() {
	if (!isEmpty) {
		return stack[size - 1];
		size = 0;
	}
}
bool Stack::isEmpty() {
}
int Stack::getSize() {
}
void Stack::clear() {
}
string Stack::toString() {
	s = "";

	for (int i = size - 1; i >= 0; i--)
	{
		s += to_string(stack[i]) + " ";
	}
}

return s;
}