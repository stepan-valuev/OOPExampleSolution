#include "Student.h"

int main() {
	int n = 0;

	Student st1, st2;

	st1.name = "Stepan";
	st1.age = 15;
	st1.mark = 8.1;
	st1.alive = true;

	st2.name = "Danik";
	st2.age = 15;
	st2.mark = 9.99;
	st2.alive = false;

	cout << "Before: " << endl;
	cout << st1.getString() << endl;
	cout << st2.getString() << endl;

	st1 = st2;
	st1.name = "Bogdan";

	cout << "After: " << endl;
	cout << st1.getString() << endl;
	cout << st2.getString() << endl;

	return 0;
}