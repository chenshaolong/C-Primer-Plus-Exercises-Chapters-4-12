// Chapter 11 Working with Classes, Programming Exercises #4, Page 639
//  Rewrite the final Time class example (Listings 11.10, 11.11, and 11.12) so that all the overloaded operators are implemented using friend functions.
// compile mytime31.cpp and mytime32.cpp together
#include <iostream>
#include "mytime30.h"

int main()
{
    using std::cout;
    using std::endl;
    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;
    cout << "Aida and Tosca:\n";
    cout << aida << "; " << tosca << endl;
    temp = aida + tosca; // operator+()
    cout << "Aida + Tosca: " << temp << endl;
    temp = aida - tosca; // operator+()
    cout << "Aida - Tosca: " << temp << endl;
    temp = aida * 1.17; // member operator*()
    cout << "Aida * 1.17: " << temp << endl;
    cout << "10.0 * Tosca: " << 10.0 * tosca << endl;
    return 0;
}
