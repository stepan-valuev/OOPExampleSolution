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


	//methods
	string toString() {
		string s = "Name: " + name;
		s += "; Age: " + to_string(age)
		+ "; Average mark: " + to_string(mark)
		+ "; Alive: " + (alive ? "yes" : "no");

		return s;
	}
};