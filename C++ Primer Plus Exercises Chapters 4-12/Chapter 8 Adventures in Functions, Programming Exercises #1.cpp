// Chapter 8 Adventures in Functions, Programming Exercises #1, Page 459-460
//  Write a function that normally takes one argument, the address of a string, and prints that string once. However, if a second, type int, argument is provided and is nonzero, the function should print the string a number of times equal to the num- ber of times that function has been called at that point. (Note that the number of times the string is printed is not equal to the value of the second argument; it is equal to the number of times the function has been called.) Yes, this is a silly func- tion, but it makes you use some of the techniques discussed in this chapter. Use the function in a simple program that demonstrates how the function works.
#include <iostream>
#include <string>
#include <cstdlib> //srand(), rand() method
#include <ctime>  //time() method
using namespace std;

//void print(char * str, int n = 1);
int print(string str, int n = 1);
int total = 1;

int main()
{
    
    string str = "Linxi's my girlfriend!";
    int n;
    n = print(str);
    srand (time(NULL));  // initialize random seed
    int max = rand() % 10 + 1; //generate a random number between 1 and 10
    cout << "max = " << max << endl;
    for (int i = 0; i < max; i++)
        n = print(str,n);
    return 0;
}

int print(string str, int n)
{
    if(n != 0)
        while(n-->0)
            cout << str << endl;
    cout << "======================\n";
    total += 1;
    return total;
}
