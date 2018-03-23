//  Chapter 7 Functions: C++’s Programming Modules, Programming Exercises #5, Page 390
/*  Define a recursive function that takes an integer argument and returns the factorial of that argument. Recall that 3 factorial, written 3!, equals 3 × 2!, and so on, with 0! defined as 1. In general, if n is greater than zero, n! = n * (n - 1)!.Test your function in a program that uses a loop to allow the user to enter various values for which the program reports the factorial.
 */
#include <iostream>
using namespace std;

long double factorial(int n);

int main()
{
    int n;
    cout << "Please enter an integer: ";
    while (cin >> n)
    {
        if (n<0)
        {
            cout << n << " is a negative value which is invalid for factorial computation. Bye!\n";
            break;
        }
        cout << n << "!= " << factorial(n) << endl;
        cout << "Please enter an integer: ";
    }
    return 0;
}

long double factorial(int n)
{
    if(n > 0)
        return n*factorial(n-1);
    else return 1;
}