#pragma once
#include "main.h"

class Animal
{
public:
	string name;

	Animal(string name) : name(name) {}

	virtual void getVoice() {
		cout << "..." << endl;
	}
};


