//Chapter 6 Branching Statements and Logical Operators, Programming Exercises #5, Page 317
/*The Kingdom of Neutronia, where the unit of currency is the tvarp, has the fol- lowing income tax code:
 First 5,000 tvarps: 0% tax
 Next 10,000 tvarps: 10% 
 tax Next 20,000 tvarps: 15% 
 tax Tvarps after 35,000: 20% tax
 For example, someone earning 38,000 tvarps would owe 5,000 × 0.00 + 10,000 × 0.10 + 20,000 × 0.15 + 3,000 × 0.20, or 4,600 tvarps.Write a program that uses a loop to solicit incomes and to report tax owed.The loop should terminate when the user enters a negative number or non-numeric input.
 */

#include <iostream>
using namespace std;
void income_tax(double income);

int main()
{
    double income;
    cout << "Please enter your income in tvarps: ";
    while (cin >> income && income > 0)
    {
        income_tax(income);
        cout << "Please enter your income in tvarps: ";
    }
    cout << "The program terminates because the user enters a negative number or non-numeric input.\n";
    cout << "Bye!\n";
    return 0;
}

void income_tax(double income)
{
    double tax;
    if (income <= 5000)
        tax = 0;
    else if (income > 5000 && income <= 15000)
        tax = 0.1 * (income - 5000);
    else if (income > 15000 && income <= 35000)
        tax = 0.1 * 10000 + 0.15 * (income-15000);
    else
        tax = 0.1 * 10000 + 0.15 * 20000 + 0.2 * (income - 35000);
    cout << "Your income tax is " << tax << " tvarps.\n";
}