#include "doctest.h"
#include "NumberWithUnits.hpp"
#include <stdexcept>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <sstream>

using ariel::NumberWithUnits;
NumberWithUnits m1(1, "m");
NumberWithUnits m2(2, "m");
NumberWithUnits cm1(1, "cm");
NumberWithUnits cm50(50, "cm");
NumberWithUnits m2_5(2.5, "m");
NumberWithUnits cm500(500, "cm");
NumberWithUnits g500(2.5, "g");
NumberWithUnits kg1(1, "kg");
NumberWithUnits cm5_5(5.5, "cm");
NumberWithUnits sec60(60.0, "sec");
NumberWithUnits min1(1, "min");
NumberWithUnits sec30(30, "sec");
NumberWithUnits sec1(1, "sec");

TEST_CASE("equals")
{

    CHECK(cm50 + cm50 == m1);
    CHECK(g500 + g500 == kg1);
    CHECK(sec30 + sec30 == min1);
    CHECK_EQ(min1, sec60);

    CHECK_EQ(sec30, NumberWithUnits{30, "sec"});
    CHECK(cm500 - m2_5 == -m2);

    NumberWithUnits temp(100, "g");
    temp -= kg1;
    CHECK_EQ(temp, NumberWithUnits{-990, "g"});

    NumberWithUnits temp1(100, "g");
    temp1 += kg1;
    CHECK_EQ(temp1, NumberWithUnits{1100, "g"});

    CHECK_EQ(5.0 * sec60, NumberWithUnits{300, "sec"});
    CHECK_EQ(4.0 * sec60, NumberWithUnits{4, "min"});
    CHECK_EQ(2.0 * sec30, NumberWithUnits{1, "min"});
    CHECK_EQ(sec60 * 1.0, NumberWithUnits{1, "min"});

    CHECK(sec60 == min1);
    CHECK(sec60 <= min1);
    CHECK(sec60 >= min1);
    CHECK(NumberWithUnits{30, "sec"} < min1);
    CHECK(NumberWithUnits{999, "g"} < kg1);
    // CHECK(NumberWithUnits{1, "m"} < cm50 * 3.0);
    CHECK(m2 != NumberWithUnits{2.5, "m"});

    // ++ --
    CHECK(++m2_5 == m2_5 + m1);
    CHECK(++m1 != m1 + cm500);
    CHECK(m1++ != m1 + m1);
    CHECK(m1++ == m1);

    CHECK(--m1 == m1 - m1);
    CHECK(--m1 != m1 - cm1);
    CHECK(m1-- != m1 - m1);
    CHECK(m1-- == m1);
}
// TEST_CASE("Not Equals")
// {
//     CHECK_NE(m, cm3_4);
// }

TEST_CASE("throws")
{
    CHECK_THROWS(m1 + kg1);
}
