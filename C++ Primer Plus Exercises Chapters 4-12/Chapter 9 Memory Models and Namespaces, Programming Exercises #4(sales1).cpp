// Chapter 9 Memory Models and Namespaces, Programming Exercises #4, Page 518
/* Write a three-file program based on the following namespace:
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
 
 // copies the lesser of 4 or n items from the array ar
 // to the sales member of s and computes and stores the
 // average, maximum, and minimum values of the entered items;
 // remaining elements of sales, if any, set to 0
 void setSales(Sales & s, const double ar[], int n);
 // gathers sales for 4 quarters interactively, stores them 
 // in the sales member of s and computes and stores the 
 // average, maximum, and minimum values
 void setSales(Sales & s);
 // display all information in structure s
 void showSales(const Sales & s);
 }
//  The first file should be a header file that contains the namespace.The second file should be a source code file that extends the namespace to provide definitions for the three prototyped functions.The third file should declare two Sales objects. It should use the interactive version of setSales() to provide values for one struc- ture and the non-interactive version of setSales() to provide values for the sec- ond structure. It should display the contents of both structures by using showSales().
*/

// sales1.cpp -- main function
#include <iostream>
#include "sales.h"
using namespace std;
using namespace SALES;

int main()
{
    Sales salearray [2];
    const double ar[3] = {3.3, 6.6, 9.9};
    setSales(salearray[0],ar,3);
    showSales(salearray[0]);
    
    setSales(salearray[1]);
    showSales(salearray[1]);

    return 0;
}