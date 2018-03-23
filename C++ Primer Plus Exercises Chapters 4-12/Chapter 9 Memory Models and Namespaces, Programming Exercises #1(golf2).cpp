// Chapter 9 Memory Models and Namespaces, Programming Exercises #1, Page 516-517
// golf2.cpp
#include <iostream> 
#include "golf.h"
using namespace std;

void setgolf(golf & g, const char * name, int hc)
{
    for (int i = 0; i < Len; i++)
    {
        if (name[i] != '\0')
            g.fullname[i] = name[i];
        else
            break;
    }
    g.handicap = hc;
}

int setgolf(golf & g)
{
    cout << "Please enter fullname: ";
    cin.getline(g.fullname, Len);
    int length = strlen(g.fullname);
    if (length != 0)
    {
        cout << "Please enter handicap: ";
        cin >> g.handicap;
        cin.get();
        return 1;
    }
    else
        return 0;
}

void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf & g)
{
    int length = strlen(g.fullname);
    if (length != 0)
        cout << "fullname: " << g.fullname << ", "
             << "handicap: " << g.handicap << endl;
    else
        cout << "Empty string.\n";
}