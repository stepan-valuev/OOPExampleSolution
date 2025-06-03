#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:
	Dog(string name) : Animal(name) {}

	void getVoice() override {
		cout << "Gauuuuuuuuuu... gau........." << endl;
	}
};
