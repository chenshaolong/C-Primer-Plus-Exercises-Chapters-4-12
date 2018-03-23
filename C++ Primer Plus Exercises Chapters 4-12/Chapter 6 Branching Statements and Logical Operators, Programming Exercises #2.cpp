// Chapter 6 Branching Statements and Logical Operators Exercises #2, Page 316
/*  Write a program that reads up to 10 donation values into an array of double. (Or, if you prefer, use an array template object.) The program should terminate input on non-numeric input. It should report the average of the numbers and also report how many numbers in the array are larger than the average.
 */
#include <iostream>
#include <cctype>              // prototypes for character functions
using namespace std;
const int Arsize = 10;

int main()
{
    double donation[Arsize];
    int i = 0;
    double sum = 0;
    cout << "Please enter up to 10 donation values:\n";
    while(i < Arsize)            // test for sentinel
    {
        if (!(cin >> donation[i]))
        {
            cin.clear();
            cout << "The program terminates because of a non-numeric input.\n";
            break;
        }
        else
        {
            cout << " # " << i + 1 << " is " << donation[i] << endl;
            sum += donation[i];
            i++;
            cout << "Next value:\n";
        }
    }
    double average = sum/i;
    cout << "The average of " << i << " donation values is " << average << endl;
    int larger = 0;
    for (int j=0; j < i; j++)
        if (donation[j] > average)
        {
            cout << " # " << j + 1 << " " << donation[j] << " is larger than the average " << average << endl;
            larger++;
        }
    cout << "There are " << larger << " numbers larger than the average.\n";
    
    return 0;
}