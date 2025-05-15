#pragma once
#include <iostream>
#include <string>

class ArrayList
{
private:
	int* list;
	int size;
public:
	ArrayList();
	~ArrayList();

	void add(int element);
	void add(int index, int element);
	void addAll(int* elements, int size);
	void remove();
	void remove(int index);
	void clear();
	bool isEmpty();
	int get(int index);
	int set(int index, int element);
	int getSize();
	string toString();
};

