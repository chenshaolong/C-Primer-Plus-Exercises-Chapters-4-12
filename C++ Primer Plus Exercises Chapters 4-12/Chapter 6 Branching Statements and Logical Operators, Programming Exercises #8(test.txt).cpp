//Chapter 6 Branching Statements and Logical Operators, Programming Exercises #8, Page 318
//  Write a program that opens a text file, reads it character-by-character to the end of the file, and reports the number of characters in the file.

#include <iostream>
#include <fstream>  // file I/O support
using namespace std;

int main()
{
    ifstream fin;
    fin.open("test.txt");
    int count = 0;
    char ch;
    fin >> ch;
    while (fin.eof()==0)
    {
         fin >> ch;
         count++;
    }
    cout << "The number of characters in the file test.txt is " << count << endl;
    fin.close();
    return 0;
}