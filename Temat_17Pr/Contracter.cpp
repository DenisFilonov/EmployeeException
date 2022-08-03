#include "Contracter.h"

NSemployee::Contracter::Contracter(string name, string position, float salary) : Employee(name, position, salary)
{
}

NSemployee::Contracter::~Contracter()
{
    cout << "~Contracter()\n";
}

void NSemployee::Contracter::show() const&
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
}

string NSemployee::Contracter::type() const&
{
    return "Contracter";
}

float NSemployee::Contracter::calcSalary() const&
{
    if (salary < 0)
    {
        throw new SalaryException(name, salary);
    }

    return salary * 0.8;
}
