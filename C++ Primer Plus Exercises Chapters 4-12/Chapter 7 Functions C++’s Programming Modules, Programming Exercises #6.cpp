//  Chapter 7 Functions: C++’s Programming Modules, Programming Exercises #6, Page 390
/*  Write a program that uses the following functions:
 Fill_array() takes as arguments the name of an array of double values and an array size. It prompts the user to enter double values to be entered in the array. It ceases taking input when the array is full or when the user enters non-numeric input, and it returns the actual number of entries.
 Show_array() takes as arguments the name of an array of double values and an array size and displays the contents of the array.
 Reverse_array() takes as arguments the name of an array of double values and an array size and reverses the order of the values stored in the array.
 The program should use these functions to fill an array, show the array, reverse the array, show the array, reverse all but the first and last elements of the array, and then show the array.
 */
#include <iostream>
using namespace std;

int Fill_array(double arr[], int size);
void Show_array(double arr[], int size);
void Reverse_array(double arr[], int size, int k);

int main()
{
    int n;
    cout << "Please enter the array size: ";
    cin >> n;
    double array[n];
    n = Fill_array(array, n);
    cout << "The original array is: \n";
    Show_array(array, n);
    Reverse_array(array, n, 0);
    cout << "After reversal, now the array is: \n";
    Show_array(array, n);
    Reverse_array(array, n, 1);
    cout << "After reversal all but the first and last elements, now the array is: \n";
    Show_array(array, n);
    return 0;
}

int Fill_array(double arr[], int size)
{
    cout << "Please enter up to " << size << " double values: ";
    double x;
    int i=0;
    while (cin >> x && i < size)
    {
        arr[i] = x;
        i++;
    }
    return i;
}
void Show_array(double arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

//k=0 to reverse all elements of an array while k=1 to reverse all but the first and last elements of an array
void Reverse_array(double arr[], int size, int k)
{
    int i,j;
    double temp;
    for (i = k, j = size - 1 - k; i < j; i++,j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}