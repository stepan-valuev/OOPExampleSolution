#include "SoundStudio.h"
#include "Cat.h"
#include "Dog.h"

int main() {
	Animal a1, a2, a3;

	cout << "Number of animals: " << a3.getCount << endl;
	cout << "Number of animals: " << Animal::getCount << endl;

	{
		Animal a4, a5;
		cout << "Number of animals: " << Animal::getCount << endl;

	}

	cout << "Number of animals: " << Animal::getCount << endl;

	return 0;
}