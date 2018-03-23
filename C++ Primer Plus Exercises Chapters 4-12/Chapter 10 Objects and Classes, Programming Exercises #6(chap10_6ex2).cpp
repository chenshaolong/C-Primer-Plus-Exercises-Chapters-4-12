// Chapter 10 Objects and Classes, Programming Exercises #6, Page 575
//chap10_6ex2.cpp -- Move member functions
#include <iostream>
#include "chap10_6ex.h"
using namespace std;

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    cout << "x = " <<  this->x << ", y = " <<  this->y << endl;
}

Move Move::add(const Move & m) const
{
    Move temp;
    temp.x = x + m.x;
    temp.y = y + m.y;
    return temp;
}

void Move::reset(double a, double b)
{
    x = a;
    y = b;
}