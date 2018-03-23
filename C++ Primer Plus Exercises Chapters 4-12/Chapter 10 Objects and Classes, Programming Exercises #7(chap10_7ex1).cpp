// Chapter 10 Objects and Classes, Programming Exercises #7, Page 575
/*A Betelgeusean plorg has these properties:
 Data
 A plorg has a name with no more than 19 letters.
 A plorg has a contentment index (CI), which is an integer. Operations
 A new plorg starts out with a name and a CI of 50.
 A plorg’s CI can change.
 A plorg can report its name and CI.
 The default plorg has the name "Plorga".
 Write a Plorg class declaration (including data members and member function pro- totypes) that represents a plorg.Write the function definitions for the member func- tions.Write a short program that demonstrates all the features of the Plorg class.
 */

// use command "g++ -std=c++11 chap10_7ex1.cpp chap10_7ex2.cpp && ./a.out" to excute

#include <iostream>
#include "chap10_7ex.h"
using namespace std;

int main()
{
    int n = 2;
    Plorg * plorg = new Plorg [n] {Plorg(), Plorg("plorga king")};
    for (int i = 0; i < n; i++)
        plorg[i].report();
    cout << "\nUpdate plorgs' CI:\n";
    /* initialize random seed: */
    srand (time(NULL));
    for (int i = 0; i < n; i++)
    {
        /* generate random number between 1 and 10: */
        int random = rand() % 100 + 1;
        plorg[i].CIchange(random);
        plorg[i].report();
    }
    
    delete [] plorg;
    
    return 0;
}
