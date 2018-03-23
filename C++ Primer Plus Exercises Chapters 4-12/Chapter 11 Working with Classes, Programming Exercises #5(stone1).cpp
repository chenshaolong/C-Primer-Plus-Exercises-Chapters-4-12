// Chapter 11 Working with Classes, Programming Exercises #5, Page 639
//  Rewrite the Stonewt class (Listings 11.16 and 11.17) so that it has a state member that governs whether the object is interpreted in stone form, integer pounds form, or floating-point pounds form. Overload the << operator to replace the show_stn() and show_lbs() methods. Overload the addition, subtraction, and multiplication operators so that one can add, subtract, and multiply Stonewt values. Test your class with a short program that uses all the class methods and friends
// compile with stone2.cpp
#include <iostream>
using std::cout;
using std::endl;
#include "stone.h"

int main()
{
    Stonewt celebrity = Stonewt(20.0, st); // uses constructor to initialize
    Stonewt detective(285.7); // same as Stonewt wolfe = 285.7;
    Stonewt president(288, ip);
    
    cout << "The celebrity weighed: " << celebrity << endl;
    cout << "The detective weighed: " << detective << endl;
    cout << "The president weighed: " << president << endl;
  
    Stonewt temp;
    temp = celebrity + detective;
    cout << "The celebrity + detective weighed: " << temp << endl;
    temp = celebrity + detective + president;
    cout << "The celebrity + detective + president weighed: " << temp << endl;
    temp = president - celebrity;
    cout << "The president weights more than the celebrity by " << temp << endl;
    temp = president - detective;
    cout << "The president weights more than the detective by " << temp << endl;
    
    temp = celebrity * 1.06;
    cout << "After dinner, the celebrity weighed: " << temp << endl;
    temp = 1.08 * detective;
    cout << "After dinner, the detective weighed: " << temp << endl;
    
    return 0;
}