#pragma once
#include<string>

using namespace std;

class EmlpoyeeException
{
protected:
	string name;
	float money;

public:
	EmlpoyeeException(string name, float money);
	virtual ~EmlpoyeeException();

	virtual string showMessage() = 0;
};

//============================================================================================================
class SalaryException : public EmlpoyeeException
{
public:
	SalaryException(string name, float money);
	~SalaryException()override;

	virtual string showMessage() override;
};
//============================================================================================================

class PrizeException : public EmlpoyeeException
{
public:
	PrizeException(string name, float money);
	~PrizeException()override;

	virtual string showMessage() override;

};