#pragma once
#include"Employee.h"
#include"EmlpoyeeException.h"

namespace NSemployee
{

    class Contracter :
        public Employee
    {
    public:
        Contracter(string name, string position, float salary);
        ~Contracter() override;

        void show()const& override;
        string type()const& override;
        float calcSalary()const& override;
    };

}
