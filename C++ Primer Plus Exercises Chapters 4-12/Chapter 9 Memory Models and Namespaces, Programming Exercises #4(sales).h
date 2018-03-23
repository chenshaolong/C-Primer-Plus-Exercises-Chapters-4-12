// Chapter 9 Memory Models and Namespaces, Programming Exercises #4, Page 518
// sales.h -- structure templates and function prototypes
#ifndef sales_h_
#define sales_h_

namespace SALES
{
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };

void setSales(Sales & s, const double ar[], int n);
void setSales(Sales & s);
void showSales(const Sales & s);
}

#endif