#include "NumberWithUnits.hpp"
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>

#include <string>

using namespace std;
using namespace ariel;

namespace ariel
{

    NumberWithUnits::NumberWithUnits(double num, const char *ch)
    {
        this->value = num;
        this->unit = ch;
    }

    NumberWithUnits n(50, "kg");

    void ariel::NumberWithUnits::read_units(ifstream &units)
    {
    }

    NumberWithUnits operator+(const NumberWithUnits &num1, const NumberWithUnits &num2)
    {
        return n;
    }
    NumberWithUnits operator+(const NumberWithUnits &num, double a)
    {
        return n;
    }
    NumberWithUnits operator+=(NumberWithUnits &num1, const NumberWithUnits &num2)
    {
        return n;
    }

    NumberWithUnits operator-(const NumberWithUnits &num1, const NumberWithUnits &num2)
    {
        return n;
    }
    NumberWithUnits operator-(const NumberWithUnits &num)
    {
        return n;
    }
    NumberWithUnits operator-=(NumberWithUnits &num1, const NumberWithUnits &num2)
    {
        return n;
    }

    NumberWithUnits operator*( NumberWithUnits& num1, double num)
    {
        return n;
    }

    NumberWithUnits operator*(double num, NumberWithUnits& num1)
    {
        return n;
    }

    bool operator<(const NumberWithUnits &num1, const NumberWithUnits &num2)
    {
        return true;
    }
    bool operator<=(const NumberWithUnits &num1, const NumberWithUnits &num2)
    {
        return true;
    }
    bool operator>(const NumberWithUnits &num1, const NumberWithUnits &num2)
    {
        return true;
    }
    bool operator>=(const NumberWithUnits &num1, const NumberWithUnits &num2)
    {
        return true;
    }
    bool operator==(const NumberWithUnits &num1, const NumberWithUnits &num2)
    {
        return true;
    }
    bool operator!=(const NumberWithUnits &num1, const NumberWithUnits &num2)
    {
        return true;
    }

    NumberWithUnits operator++(NumberWithUnits &num)
    {
        return n;
    }
    NumberWithUnits operator++(NumberWithUnits &num, int)
    {
        return n;
    }
    NumberWithUnits operator--(NumberWithUnits &num)
    {
        return n;
    }
    NumberWithUnits operator--(NumberWithUnits &num, int)
    {
        return n;
    }

    std::ostream &operator<<(std::ostream &out, const NumberWithUnits &num1)
    {
        out << num1.value << " [" << num1.unit << " ]" << endl;
        return out;
    }
    std::istream &operator>>(std::istream &in, NumberWithUnits &num1)
    {
        return in;
    }
}
