#pragma once
#include<iostream>
#include<string>
using namespace std;

namespace NSemployee
{

	class Employee //Класс создётся в куче, структура в стэке
	{
	protected:
		string name;
		string position;
		float salary;

	public:
		Employee(string name, string position, float salary);
		virtual ~Employee();

		void setName(string name);
		void setPosition(string position);
		void setSalary(float salary);

		string setName()const&;
		string setPosition()const&;
		float setSalary()const&;

		virtual void show()const& = 0;
		virtual string type()const& = 0;
		virtual float calcSalary()const& = 0;
	};

}



