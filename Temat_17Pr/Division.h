#pragma once
#include"Employee.h"
#include"Staff.h"
#include"Contracter.h"
#include"EmlpoyeeException.h"


namespace NSdivision
{

	using namespace NSemployee;
	class Division
	{
		string divname;
		Employee** arr;
		int size;

	public:
		Division();
		Division(string divname);
		Division(string divname, Employee**& arr, int size);
		~Division();

		void addEmployee(Employee* em);
		void showDivision()const&;
		float calcTotalSalary()const&;
	};

}


