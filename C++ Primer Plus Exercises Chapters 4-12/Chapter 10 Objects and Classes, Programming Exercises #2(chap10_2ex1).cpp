// Chapter 10 Objects and Classes, Programming Exercises #2, Page 574
//chap10_1ex1.cpp -- testing the Person class
#include <iostream>
#include "chap10_2ex.h"
using namespace std;


int main()
{
    Person one; // use default constructor
    one.Show();
    one.FormalShow();
    cout << endl;
    
    Person two("Smythecraft"); // use #2 with one default argument
    two.Show();
    two.FormalShow();
    cout << endl;
    
    Person three("Dimwiddy", "Sam"); // use #2, no defaults
    three.Show();
    three.FormalShow();
    
    return 0;
}