// Chapter 7 Functions: C++’s Programming Modules, Programming Exercises #1, Page 389
/*  Write a program that repeatedly asks the user to enter pairs of numbers until at least one of the pair is 0. For each pair, the program should use a function to calcu- late the harmonic mean of the numbers.The function should return the answer to main(), which should report the result.The harmonic mean of the numbers is the inverse of the average of the inverses and can be calculated as follows:
    harmonic mean = 2.0 × x × y / (x + y)
*/
#include <iostream>
using namespace std;
double harmonic_mean(double x, double y);

int main()
{
    double x,y;
    do
    {
        cout << "Please enter a pairs of numbers: ";
        cin >> x >> y;
    }while(x==0 || y==0);
    cout << harmonic_mean(x,y) << endl;
}

double harmonic_mean(double x, double y)
{
    return 2.0 * x * y / (x + y);
}
