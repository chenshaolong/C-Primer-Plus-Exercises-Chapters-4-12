//  Chapter 7 Functions: C++’s Programming Modules, Programming Exercises #8, Part a, Page 390
/*  Redo Listing 7.15 without using the array class. Do two versions:
 a. Use an ordinary array of const char * for the strings representing the season names, and use an ordinary array of double for the expenses.
 */
#include <iostream>
#include <array>
#include <string>
using namespace std;
const int Seasons = 4;
const char * Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

void fill(double * pa);
void show(double * pa);

int main()
{
    double expenses[Seasons];
    fill(expenses);
    show(expenses);
    return 0;
}

void fill(double * pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa[i];
    }
}

void show(double * pa)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << pa[i] << endl;
        total += pa[i];
    }
    cout << "Total Expenses: $" << total << endl;
}