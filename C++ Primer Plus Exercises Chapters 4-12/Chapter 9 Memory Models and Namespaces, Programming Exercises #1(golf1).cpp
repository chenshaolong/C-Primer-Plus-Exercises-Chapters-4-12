// Chapter 9 Memory Models and Namespaces, Programming Exercises #1, Page 516-517
// golf1.cpp
#include <iostream>
#include "golf.h"
using namespace std;

const int size = 3;

int main()
{
    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);
    handicap(ann, 26);
    showgolf(ann);
    
    golf andy;
    setgolf(andy);
    showgolf(andy);
    
    golf golfarray [size];
    
    int i;
    for (i = 0; i < size; i++)
    {
        if (setgolf(golfarray[i]))
            showgolf(golfarray[i]);
        else
            break;
    }
    if (i < size)
        cout << "Empyt string. Bye.\n";
    else
        
        cout << "Done.\n";
    

    
    return 0;
}