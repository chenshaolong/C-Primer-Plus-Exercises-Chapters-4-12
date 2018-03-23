//  Chapter 7 Functions: C++’s Programming Modules, Programming Exercises #7, Page 390
/*  Redo Listing 7.7, modifying the three array-handling functions to each use two pointer parameters to represent a range.The fill_array() function, instead of returning the actual number of items read, should return a pointer to the location after the last location filled; the other functions can use this pointer as the second argument to identify the end of the data.
 */
#include <iostream>
using namespace std;
const int Max = 5;

double * fill_array(double * begin, double * end);
void show_array(const double * begin, const double * end);
void revalue(double r, double * begin, double * end);

int main()
{
    double properties[Max];
    double * end = fill_array(properties, properties + Max);
    show_array(properties, end);
    double size = end - properties;
    if (size > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor)) // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
    revalue(factor, properties, end);
    show_array(properties, end);
    }
    cout << "Done.\n";
    return 0;
}

double * fill_array(double * begin, double * end)
{
    double * pt;
    double temp;
    int i = 0;
    for (pt = begin; pt != end; pt++)
    {
        cout << "Enter value #" << i + 1 << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)
            break;
        * pt = temp;
        i++;
    }
    return (begin + i);
}

void show_array(const double * begin, const double * end)
{
    const double * pt;
    int i = 0;
    for (pt = begin; pt != end; pt++)
    {
        i++;
        cout << "Property #" << i << ": $";
        cout << * pt << endl;
    }
}

void revalue(double r, double * begin, double * end)
{
    double * pt;
    for (pt = begin; pt != end; pt++)
        *pt = (*pt) * r;
}