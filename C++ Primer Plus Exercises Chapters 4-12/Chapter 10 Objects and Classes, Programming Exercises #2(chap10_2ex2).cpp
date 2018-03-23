// Chapter 10 Objects and Classes, Programming Exercises #2, Page 574
//chap10_2ex2.cpp -- Person member functions
#include <iostream>
#include "chap10_2ex.h"
using namespace std;

Person::Person(const string & ln, const char * fn)
{
    lname = ln;  //Assignment operator works for a string object but not for char array
    strcpy(fname, fn); //using strcpy() to copy fn to fname for char array
}

// the following methods display lname and fname
void Person::Show() const // firstname lastname format
{
    cout << "First name: " << fname << ", " << "Last name: " << lname << endl;
}

void Person::FormalShow() const //lastname, firstname format
{
    cout << "Last name: " << lname << ", " << "First name: " << fname << endl;
}