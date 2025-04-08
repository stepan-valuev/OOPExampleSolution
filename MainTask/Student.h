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

	//methods
	string getString() {
		string s = "Name: " + name;
		s += "; Age: " + to_string(age)
		+ "; Average mark: " + to_string(mark)
		+ "; Alive: " + (alive ? "yes" : "no");

		return s;
	}
};