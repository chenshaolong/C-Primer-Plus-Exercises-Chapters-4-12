// Chapter 11 Working with Classes, Programming Exercises #2, Page 638-639
/*  Modify the Vector class header and implementation files (Listings 11.13 and 11.14) so that the magnitude and angle are no longer stored as data components. Instead, they should be calculated on demand when the magval() and angval() methods are called.You should leave the public interface unchanged (the same public meth- ods with the same arguments) but alter the private section, including some of the private method and the method implementations.Test the modified version with Listing 11.15, which should be left unchanged because the public interface of the Vector class is unchanged.
 */
// compile with the vect2.cpp file
 
#include <iostream>
#include <fstream>
#include <cstdlib> // rand(), srand() prototypes
#include <ctime>   // time() prototype
#include "vect.h"

int main()
{
    using namespace std;
    using VECTOR::Vector;
    ofstream fout;
    fout.open("random_walk.txt");
    srand(time(0)); // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        cout << "After " << steps << " steps, the subject "
        "has the following location:\n";
        cout << result << endl;
        fout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        fout << " or\n" << result << endl;
        cout << "Average outward distance per step = "
        << result.magval()/steps << endl;
        fout << "Average outward distance per step = "
        << result.magval()/steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}