#include"Employee.h"
#include"Staff.h"
#include"Contracter.h"
#include"Division.h"

void main()
{
	NSemployee::Staff one("Vasia", "Manager", 15000, 3400);
	one.show();

	NSemployee::Contracter two("Sergey", "Accountant", 19000);
	two.show();

	NSemployee::Employee** arr = new NSemployee::Employee * [4]{
		new NSemployee::Staff("Vasia", "Manager", -15000, 3400),
		new NSemployee::Staff("Sergey", "Accountant", 19000, -1000),
		new NSemployee::Contracter("Lena", "MD", 16000),
		new NSemployee::Contracter("Petya", "HR", 14000),
	};

	NSdivision::Division* a = new NSdivision::Division("IT", arr, 4);
	a->showDivision();
	cout << "\nTotal salary: " << a->calcTotalSalary() << endl;
}