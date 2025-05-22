#include "Worker.h"


Worker::Worker() : Worker("", 0, false, "", 0.0)
{
	cout << "Worker default constuctor." << endl;
}

Worker::Worker(string name, int age, bool gender, string company, double salary) :
	Human(name, age, gender)
{

	this->company = company;
	this->salary = salary;
}

Worker::Worker(const Worker& worker) :
	Worker(worker.getName(), worker.getAge(), worker.isGender(),
		worker.company, worker.salary) {}

Worker::~Worker()
{
	cout << "Worker destructor." << endl;
}

string Worker::getCompany()
{
	return company;
}
void Worker::setCompany(string company)
{
	this->company = company;
}
double Worker::getSalary()
{
	return salary;
}
void Worker::setSalary(double salary)
{
	this->salary = salary;
}
string Worker::toString()
{
	string s = "";

	s += name + ", age = " + to_string(getAge())
		+ ", gender: " + (isGender() ? "male" : "female")
		+ ", company = " + company
		+ ", salary = " + to_string(salary);

	return s;

}