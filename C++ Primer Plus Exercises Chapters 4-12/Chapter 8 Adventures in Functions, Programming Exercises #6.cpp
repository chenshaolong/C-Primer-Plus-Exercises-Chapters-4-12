// Chapter 8 Adventures in Functions, Programming Exercises #6, Page 461
/*  Write a template function maxn() that takes as its arguments an array of items of type T and an integer representing the number of elements in the array and that returns the largest item in the array.Test it in a program that uses the function tem- plate with an array of six int value and an array of four double values.The pro- gram should also include a specialization that takes an array of pointers-to-char as an argument and the number of pointers as a second argument and that returns the address of the longest string. If multiple strings are tied for having the longest length, the function should return the address of the first one tied for longest.Test the specialization with an array of five string pointers.
 */

#include <iostream> 
#include <cstring>
using namespace std;
template <typename T>
void maxn(T arr[], int n);
template <> void maxn(string arr[], int n);


int main()
{
    const int n = 6;
    int arr1[n] = {1, 5, 3, 6, 2, 4};
    maxn(arr1,n);
    
    const int m = 4;
    double arr2[m] = {1.1, 6.6, 3.3, 5.5};
    maxn(arr2,m);
    
    const int k =3;
    string arr3[k] = {"I'm Shaolong Chen.", "Linxi's my girlfriend!", "We love each other so much!"};
    maxn(arr3,k);
    
    return 0;
}

template <typename T>
void maxn(T arr[], int n)
{
    T max = arr[0];
    for (int i=1; i < n; i++)
        if (max < arr[i])
            max = arr[i];
    cout << max << endl;
}

template <> void maxn(string arr[], int n)
{
    int longest = arr[0].size();
    for (int i=1; i < n; i++)
        if (longest < arr[i].size())
            longest = arr[i].size();
    for (int i=1; i < n; i++)
        if (longest == arr[i].size())
        {
            cout << "The longest string is: \n";
            cout << arr[i] << endl;
            cout << "with address at: " << &arr[i] << endl;
            break;
        }
}