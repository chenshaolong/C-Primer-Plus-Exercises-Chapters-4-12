// Chapter 10 Objects and Classes, Programming Exercises #6, Page 575
/*Here’s a class declaration:
 class Move 
 { 
 private:
     double x;
     double y; 
 public:
     Move(double a = 0, double b = 0);  // sets x, y to a, b
     showmove() const;   // shows current x, y values
     Move add(const Move & m) const;
  // this function adds x of m to x of invoking object to get new x,
  // adds y of m to y of invoking object to get new y, creates a new
  // move object initialized to new x, y values and returns it
    reset(double a = 0, double b = 0); // resets x,y to a, b 
 };
Create member function definitions and a program that exercises the class.
*/

// use command "g++ -std=c++11 chap10_6ex1.cpp chap10_6ex2.cpp && ./a.out" to excute

#include <iostream>
#include "chap10_6ex.h"
using namespace std;

int main()
{
    Move * move = new Move [2] {Move(6.6, 8.8), Move(-66.6, -88.8)};
    move[0].showmove();
    move[1].showmove();
    move[0] = move[0].add(move[1]);
    move[0].showmove();
    move[0].reset();
    move[0].showmove();
    
    delete [] move;
    
    return 0;
}
