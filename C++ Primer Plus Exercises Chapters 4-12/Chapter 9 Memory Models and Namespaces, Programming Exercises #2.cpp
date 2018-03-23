// Chapter 9 Memory Models and Namespaces, Storage Duration, Scope, and Linkage, Programming Exercises #2, Page 517
// Redo Listing 9.9(Page 485), replacing the character array with a string object.The program should no longer have to check whether the input string fits, and it can compare the input string to "" to check for an empty line.
#include <iostream>
#include <string>
using namespace std;

// function prototype
void strcount(const string str);

int main()
{
    string input;
    cout << "Enter a line:\n";
    getline(cin, input);
    while (input != "\0")
    {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, input);
    }
    cout << "Bye\n";
    return 0;
}

void strcount(const string str)
{
    static int total = 0;   // static local variable
    int count = 0;          // automatic local variable
    
    cout << "\"" << str <<"\" contains ";
    count = str.size();
    cout << count << " characters\n";
    total += count;
    cout << total << " characters total\n";
}