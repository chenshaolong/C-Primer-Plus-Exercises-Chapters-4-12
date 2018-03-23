// Chapter 11 Working with Classes, Programming Exercises #3, Page 639
/*  Modify Listing 11.15 so that instead of reporting the results of a single trial for a particular target/step combination, it reports the highest, lowest, and average num- ber of steps for N trials, where N is an integer entered by the user.
 */
// compile with the vect2.cpp file
#include <iostream>
#include <fstream>
#include <stdlib.h> // rand(), srand() prototypes
#include <ctime>   // time() prototype
#include <climits>
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
    int N;
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
        cout << "Enter number of trials N: ";
        cin >> N;
        unsigned long hightest = 0;
        unsigned long lowest = ULONG_MAX;
        unsigned long total = 0;
        for (int i = 0; i < N; i++)
        {
            while (result.magval() < target)
            {
                direction = rand() % 360;
                step.reset(dstep, direction, Vector::POL);
                result = result + step;
                steps++;
            }
            if (hightest < steps)
                hightest = steps;
            if (lowest > steps)
                lowest = steps;
            total += steps;
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
            cout << "=======================================================\n";
            steps = 0;
            result.reset(0.0, 0.0);
        }
        double average = double(total) / N ;
        cout << "hightest number of steps for " << N << " trials: " << hightest << endl;
        cout << "lowest number of steps for " << N << " trials: " << lowest << endl;
        cout << "average number of steps for " << N << " trials: " << average << endl;
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}