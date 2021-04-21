#include <iostream>
#include <map>
#include <string>
using namespace std;

namespace ariel
{
    class NumberWithUnits
    {

    private:
        double value;
        string unit;

    public:
        NumberWithUnits(double num, const char *ch);
        

        static void read_units(ifstream &unit);
        friend int compare(const NumberWithUnits &num1, const NumberWithUnits &num2);

       
        friend ostream &operator<<(ostream &out, const NumberWithUnits &num1);
        friend istream &operator>>(istream &in, NumberWithUnits &num1);

      
        friend NumberWithUnits operator+(const NumberWithUnits &num1, const NumberWithUnits &num2);
        friend NumberWithUnits operator+(const NumberWithUnits &num, double a);
        friend NumberWithUnits operator+=(NumberWithUnits &num1, const NumberWithUnits &num2);
        friend NumberWithUnits operator-(const NumberWithUnits &num1, const NumberWithUnits &num2);
        friend NumberWithUnits operator-(const NumberWithUnits &num);
        friend NumberWithUnits operator-=(NumberWithUnits &num1, const NumberWithUnits &num2);

        
        friend NumberWithUnits operator++(NumberWithUnits &num);
        friend NumberWithUnits operator++(NumberWithUnits &num, int);
        friend NumberWithUnits operator--(NumberWithUnits &num);
        friend NumberWithUnits operator--(NumberWithUnits &num, int);

        
        friend NumberWithUnits operator*(NumberWithUnits& num1, double num);
        friend NumberWithUnits operator*(double num, NumberWithUnits &num1);
       

        
        friend bool operator>(const NumberWithUnits &num1, const NumberWithUnits &num2);
        friend bool operator>=(const NumberWithUnits &num1, const NumberWithUnits &num2);
        friend bool operator<(const NumberWithUnits &num1, const NumberWithUnits &num2);
        friend bool operator<=(const NumberWithUnits &num1, const NumberWithUnits &num2);
        friend bool operator==(const NumberWithUnits &num1, const NumberWithUnits &num2);
        friend bool operator!=(const NumberWithUnits &num1, const NumberWithUnits &num2);
    };
}
