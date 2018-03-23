// Chapter 10 Objects and Classes, Programming Exercises #7, Page 576
//chap10_7ex2.cpp -- Plorg member functions
#include <iostream>
//#include <string>
#include "chap10_7ex.h"
using namespace std;

Plorg::Plorg(const char * nm)
{
    strcpy(name, nm);
    CI = 50;
}

void Plorg::CIchange(int ci)
{
    CI = ci;
}
void Plorg::report() const
{
    cout << "Plorg's name: " << name << ", and its CI = " << CI << endl;
}