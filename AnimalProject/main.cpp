#include "SoundStudio.h"
#include "Cat.h"
#include "Dog.h"

int main() {
	SoundStudio studio;

	Dog* dog = new Dog("Laika");
	Cat* cat = new Cat("Adel");

	studio.makeItSound(dog);
	studio.makeItSound(cat);

	return 0;
}