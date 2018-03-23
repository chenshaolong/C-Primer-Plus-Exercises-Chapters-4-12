// Chapter 7 Functions: C++’s Programming Modules, Chapter Review Question 8, Page 388
/* Write a function that has this prototype:
   int replace(char * str, char c1, char c2);
   Have the function replace every occurrence of c1 in the string str with c2, and
   have the function return the number of replacements it makes.
*/
#include <iostream>
#include <string>
using namespace std;

int replace(char * str, char c1, char c2);

int main()
{
    cout << "Please enter a string: ";
    char str[100];
    cin.get(str,100);
    cout << replace(str,'l','c') << endl;
    return 0;
}

int replace(char * str, char c1, char c2)
{
    int count = 0;
    char * temp = str;
    while(*temp)
    {
        if (*temp == c1)
        {
            *temp = c2;
            count++;
        }
        temp++;
    }
    cout << "Now the string is: " << str << endl;
    cout << "The replacement occurs: ";
    return count;
}