// Chapter 12 Classes and Dynamic Memory Allocation, Programming Exercises #1, Page 717-718
#include <iostream>
#include "head.h"

int main()
{
    Cow cow1;
    cow1.ShowCow();
    
    cow1 = Cow("cow1", "eat grass",999.66);
    cow1.ShowCow();
    
    Cow cow2 = Cow("cow2", "eat grass",1666.88);
    cow2.ShowCow();
    
    const int n = 2;
    Cow cow [n];
    cow[0] = Cow(cow1);
    cow[0].ShowCow();
    cow[1] = Cow(cow2);
    cow[1].ShowCow();
    
    return 0;
}