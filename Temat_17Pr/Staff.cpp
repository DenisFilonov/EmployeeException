#include "Staff.h"
#include"EmlpoyeeException.h"


NSemployee::Staff::Staff(string name, string position, float salary, float prize) : Employee(name,position,salary)
{
    this->prize = prize;
}

NSemployee::Staff::~Staff()
{
    cout << "~Staff()\n";
}

void NSemployee::Staff::setPrize(float prize)
{
    this->prize = prize;
}

float NSemployee::Staff::getPrize() const&
{
    return prize;
}

void NSemployee::Staff::show() const&
{
    cout << "\nType: " << type();
    cout << "\nName: " << name;
    cout << "\nPosition: " << position;
    try
    {
        cout << "\nSalary: " << calcSalary();
    }
    catch (EmlpoyeeException* obj)
    {
        cout << "\nError: " << obj->showMessage() << endl;
    }
    cout << "\nPrize: " << prize << endl;
}

string NSemployee::Staff::type() const&
{
    return "Staff";
}

float NSemployee::Staff::calcSalary() const&
{
    if (salary < 0)
    {
        throw new SalaryException(name, salary);
    }
    if (prize < 0)
    {
        throw new PrizeException(name, prize);
    }

    return prize + salary;
}
