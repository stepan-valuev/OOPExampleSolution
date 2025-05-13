#pragma once
#include "Student.h"

class Group
{
private:
	Student* list;
	int count;
	int capacity;
public:
	Group();
	Group(int count);
	Group(Student* list, int count);
	~Group();

	Student get(int index);
	void st(int index, Student student);
	int getCount();
	void add(Student student);
	void add(int index, Student student);
	void remove(Student student);
	void remove(int index, Student student);
	void clear();
	bool isEmpty();
	string toString();
};

