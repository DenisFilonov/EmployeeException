#include"Division.h"

NSdivision::Division::Division()
{
	size = 0;
	arr = nullptr;
	divname = "Undefinied";
}

NSdivision::Division::Division(string divname)
{
	this->divname = divname;
	size = 0;
	arr = nullptr;
}

NSdivision::Division::Division(string divname, Employee**& arr, int size)
{
	this->divname = divname;
	//this->arr = arr; X
	if (arr != nullptr)
	{
		this->size = size;
		this->arr = arr;

		arr = nullptr;
	}
	else
	{
		this->size = 0;
		this->arr = nullptr;
	}
}

NSdivision::Division::~Division()
{
	if (arr != nullptr)
	{
		int i = 0;
		while (i < size)
		{
			arr[i++]->~Employee();
		}
		delete arr;
	}
}

void NSdivision::Division::addEmployee(Employee* em)
{
	Employee** tmp = new Employee * [++size];
	for (int i = 0; i < size-1; i++)
	{
		tmp[i] = arr[i];
	}
	tmp[size-1] = em;
	if (arr != nullptr) delete arr;
	arr = tmp;
}

void NSdivision::Division::showDivision() const&
{
	cout << "\nDivision name: " << divname;
	cout << "\nAmount of employees: " << size << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "\nEmployee #" << i + 1;
		arr[i]->show();
	}
}

float NSdivision::Division::calcTotalSalary() const&
{
	float sum = 0;
	for (int i = 0; i < size; i++)
	{
		try
		{
			sum += arr[i]->calcSalary();
		}
		catch (EmlpoyeeException* obj)
		{
			cout << "\nError: " << obj->showMessage() << endl;
		}
	}
	return sum;
}
