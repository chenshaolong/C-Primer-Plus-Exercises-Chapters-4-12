// Chapter 10 Objects and Classes, Programming Exercises #5, Page 575
// chap10_5ex.h -- class definition for Stack
#ifndef STACK_H
#define STACK_H
struct customer
{
    char fullname[35];
    double payment;
};

typedef customer Item;

class Stack
{
private:
    enum {MAX = 10};   // constant specific to class
    Item items[MAX];   // holds stack items
    int top;           // index for top stack item
    int total;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    // push() returns false if stack already is full, true otherwise
    bool push(const Item & item); // add item to stack
    // pop() returns false if stack already is empty, true otherwise
    bool pop(Item & item); // pop top into item
};

#endif

