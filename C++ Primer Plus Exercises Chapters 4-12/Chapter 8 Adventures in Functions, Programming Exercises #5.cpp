// Chapter 8 Adventures in Functions, Programming Exercises #5, Page 461
/*  Write a template function max5() that takes as its argument an array of five items of type T and returns the largest item in the array. (Because the size is fixed, it can be hard-coded into the loop instead of being passed as an argument.) Test it in a program that uses the function with an array of five int value and an array of five double values.
 */

#include <iostream>
#include <cstring>
using namespace std;
const int n = 5;
template <typename T>
void max5(T * arr);


int main()
{
    int arr1[n] = {1, 5, 3, 2, 4};
    max5(arr1);
    
    double arr2[n] = {1.1, 6.6, 3.3, 4.4, 5.5};
    max5(arr2);
    
    return 0;
}

template <typename T>
void max5(T * arr)
{
    T max = arr[0];
    for (int i=1; i < n; i++)
        if (max < arr[i])
            max = arr[i];
    cout << max << endl;
}