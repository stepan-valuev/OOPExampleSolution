#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	//fields
	string name;
	int age;
	double mark;
	bool alive;

	//constructors

	//deffault constructors or constructors without arguments
	Student() {
		cout << "deffault-constructor..." << endl;
		name = "undefine";
		age = 13;
		mark = 4.0;
		alive = false;
	 
	}

	Student(string nm) {
		cout << "constructor with arguments(name, age)" << endl;
		name = nm;
		age = 13;
		mark = 4.0;
		alive = false;

	}

	Student(string nm, int a) {
		cout << "constructor with arguments(name, age)" << endl;
		name = nm;
		age = a ? 13 : a;
		mark = 4.0;
		alive = false;

	}

	//canonical constructors 

	Student(string nm, int a, double m, bool al) {
		cout << "constructor with arguments(name, age, mark, alive)" << endl;
		name = nm;
		age = a < 13 ? 13 : a;
		mark = m;
		alive = al;

	}

	//copy-constructors 

	Student(const Student& student) {
		cout << "copy-constructor..." << endl;
		name = student.name;
		age = student.age;
		mark = student.mark;
		alive = student.alive;

	}


	//methods
	string toString() {
		string s = "Name: " + name;
		s += "; Age: " + to_string(age)
		+ "; Average mark: " + to_string(mark)
		+ "; Alive: " + (alive ? "yes" : "no");

		return s;
	}
};