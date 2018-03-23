//  Chapter 7 Functions: C++’s Programming Modules, Programming Exercises #8, Part b, Page 390
/*  Redo Listing 7.15 without using the array class. Do two versions:
    b. Use an ordinary array of const char * for the strings representing the sea- son names, and use a structure whose sole member is an ordinary array of double for the expenses. (This design is similar to the basic design of the array class.)
*/
#include <iostream>
#include <array>
#include <string>
using namespace std;
const int Seasons = 4;
const char * Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};
struct expenses
{
    double expense [Seasons];
};

void fill(expenses * pa);
void show(expenses * pa);

int main()
{
    expenses exp;
    fill(&exp);
    show(&exp);
    return 0;
}

void fill(expenses * pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa->expense[i];
    }
}

void show(expenses * pa)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << pa->expense[i] << endl;
        total += pa->expense[i];
    }
    cout << "Total Expenses: $" << total << endl;
}