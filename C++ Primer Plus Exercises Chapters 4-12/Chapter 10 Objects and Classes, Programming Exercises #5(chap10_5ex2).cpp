// Chapter 10 Objects and Classes, Programming Exercises #5, Page 575
//chap10_5ex2.cpp -- Golf member functions
#include <iostream>
#include "chap10_5ex.h"
using namespace std;

Stack::Stack() // create an empty stack
{
    top = 0;
    total = 0;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item & item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item & item)
{
    if (top > 0)
    {
        item = items[--top];
        total += item.payment;
        cout << "The running total payment in the stack is: " << total << endl;
        return true;
    }
    else
        return false;
}
