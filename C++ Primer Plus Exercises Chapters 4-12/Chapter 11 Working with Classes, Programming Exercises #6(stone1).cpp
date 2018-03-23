// Chapter 11 Working with Classes, Programming Exercises #6, Page 639
//  Rewrite the Stonewt class (Listings 11.16 and 11.17) so that it overloads all six relational operators.The operators should compare the pounds members and return a type bool value.Write a program that declares an array of six Stonewt objects and initializes the first three objects in the array declaration.Then it should use a loop to read in values used to set the remaining three array elements.Then it should report the smallest element, the largest element, and how many elements are greater or equal to 11 stone. (The simplest approach is to create a Stonewt object initial- ized to 11 stone and to compare the other objects with that object.)
// compile with stone2.cpp
#include <iostream>
#include <limits>
using namespace std;
#include "stone.h"


int main()
{
    const int n = 6;
    Stonewt array[n] = {155.5, Stonewt(166.6), Stonewt(11, 0)};
    
    double lbs;
    for (int i = 3; i < n; i++)
    {
        cout << "Please enter a value for array[" << i << "] in pounds: ";
        cin >> lbs;
        array[i] = lbs;
    }

    Stonewt threshold = Stonewt(11, 0);
    Stonewt largest = 0.0;
    Stonewt smallest =  numeric_limits<double>::max();
    int greater = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "array[" << i << "]= ";
        array[i].show_stn();
        cout << " or ";
        array[i].show_lbs();
        cout << endl;
        if (largest < array[i])
            largest = array[i];
        if (smallest > array[i])
            smallest = array[i];
        if (array[i] >= threshold)
            greater++;
    }
    
    cout << "The smallest element in the array of 6 Stonewt class is ";
    smallest.show_lbs();
    cout << endl;
    cout << "The largest element in the array of 6 Stonewt class is ";
    largest.show_lbs();
    cout << endl;
    cout << "There are " << greater << " elements are greater or equal to 11 stone.\n";
    
    return 0;
}