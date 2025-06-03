#include <iostream>
#include <string>
#include "Integer.h"
using namespace std;

int main() {
	Integer i1(10), i2(20);

	cout << i1.getValue() << " * " << i2.getValue()
		<< " = " << (i1 * i2).getValue() << endl;

	double d = 5.5;
	cout << i1.getValue() << " * " << d
		<< " = " << i1.mul(d).getValue() << endl;

	cout << i1.getValue() << " * " << d
		<< " = " << (i1 * d).getValue() << endl;

	cout << (i1 + i2).getValue() << endl;
	cout << (i1 + 5).getValue() << endl;
	cout << (i1.operator+(5)).getValue() << endl;
	//cout << (5 + i1).getValue() << endl;
	cout << (i1 - i2).getValue() << endl;
	cout << (i1 * i2).getValue() << endl;
	cout << (i1 / i2).getValue() << endl;
	cout << (i1 % i2).getValue() << endl;

	//int a = 1, b = 2, c;
	//c = a << 1;

	//string s1 = "a", s2 = "b", s3;
	//s3 = s1 + s2;

	return 0;
}