#include "Group.h"

Group::Group() : Group(20) {

}

Group::Group(int capacity) {
	this->capacity = capacity;
	list = new Student[capacity];
	count = 0;
}

Group::Group(Student* list, int count){
	if (count > 0 && list != nullptr) {
		this->count = count;
		capacity = count;
		list = new Student[count];

		for (int i = 0; i < count; i++)
		{
			this->list[i] = list[i];
		}
	}	
}

Group::~Group() {
	if (list != nullptr)
	{
		delete[] list;
	}
}

Student Group::get(int index) {
	if (count > 0 && index >= 0 && index < count) {
		return list[index];
	}
	return Student();
}

void Group::set(int index, Student student) {
	if (count > 0 && index >= 0 && index < count) {
		list[index] = student;
	}
}

int Group::getCount() {
	return count;
}

void Group::add(Student student) {
	if (list != nullptr && count < capacity) {
		list[count] = student;
		count++;
	}
}

void Group::remove(Student student) {
	for (int i = 0; i < count; i++)
	{
		if (list[i].getName() == student.getName())
	}
}
void st(int index, Student student);
int getCount();
void add(Student student);
void add(int index, Student student);
void remove(Student student);
void remove(int index, Student student);
void Group::clear() {
	count = 0;
}
bool Group::isEmpty() {
	return count == 0;
}
string toString();

