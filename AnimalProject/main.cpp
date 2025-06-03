#include "main.h"

class A {
public:

	virtual void show() {
		cout << "class A" << endl;
	}
};

class B : public A {
public:

	void show() override {
		cout << "class B" << endl;
	}
};

class C : public A {
	void show() {
		cout << "class C" << endl;
	}
};
class D : public C {
	void show() {
		cout << "class D" << endl;
	}
};

//динамический полеморфизм
//позднее связывание
//переопределение

int main() {
	A* a = new A();
	a->show();

	a = new B();
	a->show();

	a = new C();
	a->show();

	a = new D();
	a->show();

	return 0;
}