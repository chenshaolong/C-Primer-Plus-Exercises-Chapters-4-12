// Chapter 8 Adventures in Functions, Programming Exercises #7, Page 461
/*   Modify Listing 8.14 so that it uses two template functions called SumArray() to return the sum of the array contents instead of displaying the contents.The pro- gram now should report the total number of things and the sum of all the debts.
 */

#include <iostream> 
#include <cstring>
using namespace std;
template <typename T> // template A
void SumArray(T arr[], int n);

template <typename T> // template B
void SumArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double * pd[3];

    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;

    cout << "Listing Mr. E's counts of things:\n";
    SumArray(things, 6);
    cout << "Listing Mr. E's debts:\n";
    SumArray(pd, 3);
    return 0;
}

template <typename T>
void SumArray(T arr[], int n)
{
    cout << "the total number of things is : " << n << endl;
    cout << "template A\n";
    T total = 0;
    for (int i = 0; i < n; i++)
        total += arr[i];
    cout << "the sum of all the debts is : " << total << endl;
}

template <typename T>
void SumArray(T * arr[], int n)
{
    cout << "the total number of things is : " << n << endl;
    cout << "template B\n";
    T total = 0;
    for (int i = 0; i < n; i++)
         total += *arr[i];
    cout << "the sum of all the debts is : " << total << endl;
}