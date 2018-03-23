// Chapter 11 Working with Classes, Programming Exercises #5, Page 639
// stone2.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "stone.h"

Stonewt::Stonewt() // default constructor, wt = 0
{
    stone = pounds = pound = 0;
    mode = fp;
}

// construct Stonewt object from double value
Stonewt:: Stonewt(double weight, Mode form)
{
    mode = form;
    if (form == st)
    {
        stone = weight;
        pounds = stone * Lbs_per_stn;
        pound = int (pounds);
    }
    else if (form == fp)
    {
        pounds = weight;
        pound = int (pounds);
        stone = pounds / Lbs_per_stn;
    }
    else
    {
        pound = weight;
        pounds = double (pound);
        stone = pounds / Lbs_per_stn;
    }
}

Stonewt::~Stonewt() // destructor
{
}

Stonewt Stonewt::operator+(const Stonewt & st) const
{
    return Stonewt(pounds + st.pounds);
}

Stonewt Stonewt::operator-(const Stonewt & st) const
{
    return Stonewt(pounds - st.pounds);
}

Stonewt Stonewt::operator*(double n) const
{
    return Stonewt(n * pounds);
}

Stonewt operator*(double n, const Stonewt & st)
{
    return st * n;
}

std::ostream & operator<<(std::ostream & os, const Stonewt & stone)
{
    if (stone.mode == st)
        os << stone.stone << " stones or " << stone.pounds << " pounds.\n";
    else
        os << stone.pounds << " pounds or " << stone.stone << " stones.\n";
    return os;
}