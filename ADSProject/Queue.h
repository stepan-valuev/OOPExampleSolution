#include <string>
#include <iostream>
using namespace std;

//FIFO
class Queue
{
private:
	int* queue;
	int size;

public:
	Queue();
	~Queue();

	void clear();
	void enqueue(int element);
	int dequeue();
	int peek();
	bool isEmpty();
	int getSize();
	string toString();
};

