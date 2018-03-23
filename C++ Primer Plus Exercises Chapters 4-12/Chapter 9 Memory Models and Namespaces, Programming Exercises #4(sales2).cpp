// Chapter 9 Memory Models and Namespaces, Programming Exercises #4, Page 518
// sales2.cpp -- function definitions
#include <iostream>
#include "sales.h"
using namespace std;

namespace SALES
{
    void setSales(Sales & s, const double ar[], int n)
    {
        n = n < QUARTERS ? n : QUARTERS;
        for (int i = 0; i < QUARTERS; i++)
        {
            if (i < n)
                s.sales[i] = ar[i];
            else
                s.sales[i] = 0;
        }
        s.average = 0;
        s.max = s.sales[0];
        s.min = s.sales[0];
        for (int i = 0; i < QUARTERS; i++)
        {
            s.average += s.sales[i];
            s.max = s.max > s.sales[i] ? s.max : s.sales[i];
            s.min = s.min < s.sales[i] ? s.min : s.sales[i];
        }
        s.average /= 4;
    }
    
    void setSales(Sales & s)
    {
        for (int i = 0; i < QUARTERS; i++)
        {
            cout << "Please enter sales for Quarter # " << i + 1 << ": ";
            cin >>s.sales[i];
        }
        s.average = 0;
        s.max = s.sales[0];
        s.min = s.sales[0];
        for (int i = 0; i < QUARTERS; i++)
        {
            s.average += s.sales[i];
            s.max = s.max > s.sales[i] ? s.max : s.sales[i];
            s.min = s.min < s.sales[i] ? s.min : s.sales[i];
        }
        s.average /= 4;
    }
    
    void showSales(const Sales & s)
    {
        for (int i = 0; i < QUARTERS; i++)
            cout << "Sales for Quarter # " << i + 1 << ": "
            << s.sales[i] << endl;
        cout << "The sales average is: " << s.average << endl;
        cout << "The sales maximum is: " << s.max << endl;
        cout << "The sales minimum is: " << s.min << endl;
    }
}