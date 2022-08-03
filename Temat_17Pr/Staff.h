#pragma once
#include"Employee.h"
#include"EmlpoyeeException.h"

namespace NSemployee
{

    class Staff :
        public NSemployee::Employee
    {
    protected:
        float prize;

    public:
        Staff(string name, string position, float salary, float prize);
        ~Staff()override;

        void setPrize(float prize);
        float getPrize()const&;

        void show()const& override;
        string type()const& override;
        float calcSalary()const& override;
    };

}