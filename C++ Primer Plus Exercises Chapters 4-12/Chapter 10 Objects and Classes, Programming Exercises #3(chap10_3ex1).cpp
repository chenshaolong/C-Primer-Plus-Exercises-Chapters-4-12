// Chapter 10 Objects and Classes, Programming Exercises #3, Page 574-575
//chap10_3ex1.cpp -- testing the Golf class
#include <iostream>
#include "chap10_3ex.h"
using namespace std;

const int size = 3;

int main()
{
    Golf ann = Golf("Ann Birdfree", 24);
    ann.showgolf();
    ann.golfhc(26);
    ann.showgolf();
    
    Golf andy;
    andy.setgolf();
    andy.showgolf();
    
    cout <<"\nGolf array:\n";
    Golf golfarray [size];
    
    int i;
    for (i = 0; i < size; i++)
    {
        if (golfarray[i].setgolf())
            golfarray[i].showgolf();
        else
            break;
    }
    if (i < size)
        cout << "Empyt string. Bye.\n";
    else
        cout << "Done.\n";
    
    return 0;
}