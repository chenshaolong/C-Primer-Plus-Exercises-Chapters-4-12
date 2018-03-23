// Chapter 12 Classes and Dynamic Memory Allocation, Programming Exercises #1, Page 717-718
//Cow methods
//#include <cstring>
#include <iostream>
#include "head.h"
using namespace std;

// Cow methods
Cow::Cow()
{
    cout << "default constructor is called\n";
    name[0] = '\0';
    hobby = new char[1];
    hobby[0] = '\0';
    weight = 0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
    cout << "constructor is called for " << nm << endl;
    strcpy(name, nm);
    hobby = new char[strlen(ho)+1];
    strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow & c)
{
    cout << "copy constructor is called\n";
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby)+1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{
    cout << "destructor is called for " << this->name << endl;
    delete [] hobby;
}

Cow & Cow::operator=(const Cow & c)
{
    cout << "Assignment operator = is called here\n";
    if (this == &c)  // object assigned to itself
        return *this;  // all done
    strcpy(name, c.name);
    delete [] hobby;
    hobby = new char[strlen(c.hobby)+1]; // get space for new string
    strcpy(hobby, c.hobby); // copy the string
    weight = c.weight;
    return *this; // return reference to invoking object
}

void Cow::ShowCow() const
{
    cout << "name: " << name << endl;
    cout << "hobby: " << hobby << endl;
    cout << "weight: " << weight << endl;
}