// Chapter 10 Objects and Classes, Programming Exercises #4, Page 575
//chap10_4ex1.cpp -- testing for Sales class
#include <iostream>
#include "chap10_4ex.h"
using namespace std;
using namespace SALES;
//using SALES::Sales;

int main()
{
    Sales salearray [2];
    
    const double ar[3] = {3.3, 6.6, 9.9};
    salearray[0].setSales(ar, 3);
    
    salearray[0].showSales();
    
    salearray[1].setSales();
    salearray[1].showSales();
    
    return 0;
}