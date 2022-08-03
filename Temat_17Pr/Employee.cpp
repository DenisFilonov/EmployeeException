#include "Employee.h"

NSemployee::Employee::Employee(string name, string position, float salary)
{
    this->name = name;
    this->position = position;
    this->salary = salary;
}

NSemployee::Employee::~Employee()
{
    cout << "~Employee()\n";
}

void NSemployee::Employee::setName(string name)
{
    this->name = name;
}

void NSemployee::Employee::setPosition(string position)
{
    this->position = position;
}

void NSemployee::Employee::setSalary(float salary)
{
    this->salary = salary;
}

string NSemployee::Employee::setName() const&
{
    return name;
}

string NSemployee::Employee::setPosition() const&
{
    return position;
}

float NSemployee::Employee::setSalary() const&
{
    return salary;
}
