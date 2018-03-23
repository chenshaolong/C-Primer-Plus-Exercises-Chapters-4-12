//  Chapter 7 Functions: C++’s Programming Modules, Programming Exercises #2, Page 389
/*  Write a program that asks the user to enter up to 10 golf scores, which are to be stored in an array.You should provide a means for the user to terminate input prior to entering 10 scores.The program should display all the scores on one line and report the average score. Handle input, display, and the average calculation with three separate array-processing functions.
*/
#include <iostream>
using namespace std;
const int size = 10;

int input(double scores[]);
void display(double scores[], int n);
void average(double scores[], int n);

int main()
{
    double scores[size];
    int n = input(scores);
    display(scores,n);
    average(scores,n);
}

int input(double scores[])
{
    cout << "Please enter up to 10 golf scores: ";
    int i = 0;
    while(cin >> scores[i] && i < size)
        i++;
    return i;
}

void display(double scores[], int n)
{
    for (int i = 0; i < n; i++)
        cout << scores[i] << " ";
    cout << endl;
}

void average(double scores[], int n)
{
    double mean = 0;
    for (int i = 0; i < n; i++)
        mean += scores[i];
    mean = mean / n;
    cout << mean << endl;
}
