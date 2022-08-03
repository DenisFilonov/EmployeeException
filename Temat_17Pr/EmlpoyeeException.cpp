#include "EmlpoyeeException.h"

EmlpoyeeException::EmlpoyeeException(string name, float money)
{
	this->name = name;
	this->money = money;
}

EmlpoyeeException::~EmlpoyeeException()
{
}

//============================================================================================================
SalaryException::SalaryException(string name, float money) : EmlpoyeeException(name, money)
{
}

SalaryException::~SalaryException()
{
}

string SalaryException::showMessage()
{
	return "Employee " + name + " has " + to_string(money) + " salary.";
}
//============================================================================================================

PrizeException::PrizeException(string name, float money) : EmlpoyeeException(name, money)
{
}

PrizeException::~PrizeException()
{
}

string PrizeException::showMessage()
{
	return "Employee " + name + " has " + to_string(money) + " prize.";
}
