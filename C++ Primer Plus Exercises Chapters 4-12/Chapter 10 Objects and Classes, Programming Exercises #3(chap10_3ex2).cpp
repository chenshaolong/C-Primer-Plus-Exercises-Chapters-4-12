// Chapter 10 Objects and Classes, Programming Exercises #3, Page 574-575
//chap10_3ex2.cpp -- Golf member functions
#include <iostream>
#include "chap10_3ex.h"
using namespace std;

Golf::Golf(const char * name, int hc)
{
    strcpy(fullname, name);
    handicap = hc;
}

int Golf::setgolf()
{
    cout << "Please enter fullname: ";
    cin.getline(fullname, Len);
    int length = strlen(fullname);
    if (length != 0)
    {
        cout << "Please enter handicap: ";
        cin >> handicap;
        cin.get();
        return 1;
    }
    else
        return 0;
}


void Golf::golfhc(int hc)
{
    handicap = hc;
}

void Golf::showgolf() const
{
    int length = strlen(fullname);
    if (length != 0)
        cout << "fullname: " << fullname << ", "
        << "handicap: " << handicap << endl;
    else
        cout << "Empty string.\n";
}