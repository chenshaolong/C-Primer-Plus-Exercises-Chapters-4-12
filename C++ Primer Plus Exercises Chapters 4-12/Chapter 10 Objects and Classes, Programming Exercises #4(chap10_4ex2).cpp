// Chapter 10 Objects and Classes, Programming Exercises #4, Page 575
//chap10_4ex2.cpp -- Sales member functions
#include <iostream>
#include "chap10_4ex.h"
using namespace std;

namespace SALES
{
    Sales::Sales()
    {
    }
    
    void Sales::setSales(const double ar[], int n)
    {
        n = n < QUARTERS ? n : QUARTERS;
        for (int i = 0; i < QUARTERS; i++)
        {
            if (i < n)
                sales[i] = ar[i];
            else
                sales[i] = 0;
        }
        average = 0;
        max = sales[0];
        min = sales[0];
        for (int i = 0; i < QUARTERS; i++)
        {
            average += sales[i];
            max = max > sales[i] ? max : sales[i];
            min = min < sales[i] ? min : sales[i];
        }
        average /= 4;
    }
    
    void  Sales::setSales()
    {
        for (int i = 0; i < QUARTERS; i++)
        {
            cout << "Please enter sales for Quarter # " << i + 1 << ": ";
            cin >>sales[i];
        }
        average = 0;
        max = sales[0];
        min = sales[0];
        for (int i = 0; i < QUARTERS; i++)
        {
            average += sales[i];
            max = max > sales[i] ? max : sales[i];
            min = min < sales[i] ? min : sales[i];
        }
        average /= 4;
    }
    
    void  Sales::showSales() const
    {
        for (int i = 0; i < QUARTERS; i++)
            cout << "Sales for Quarter # " << i + 1 << ": "
            << sales[i] << endl;
        cout << "The sales average is: " << average << endl;
        cout << "The sales maximum is: " << max << endl;
        cout << "The sales minimum is: " << min << endl;
    }
    
}