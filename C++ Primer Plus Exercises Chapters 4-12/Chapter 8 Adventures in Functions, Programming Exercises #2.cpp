// Chapter 8 Adventures in Functions, Programming Exercises #2, Page 460
//  The CandyBar structure contains three members.The first member holds the brand name of a candy bar.The second member holds the weight (which may have a frac- tional part) of the candy bar, and the third member holds the number of calories (an integer value) in the candy bar.Write a program that uses a function that takes as arguments a reference to CandyBar, a pointer-to-char, a double, and an int and uses the last three values to set the corresponding members of the structure.The last three arguments should have default values of “Millennium Munch,” 2.85, and 350. Also the program should use a function that takes a reference to a CandyBar as an argument and displays the contents of the structure. Use const where appropriate.
#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
    string name;
    double weight;
    int calories;
};

void set(CandyBar & cb, string name = "Millennium Munch", double weight = 2.85, int calories = 350);
void display(const CandyBar & cb);

int main()
{
    CandyBar candy;
    set(candy);
    display(candy);
    
    set(candy," M&M", 6.66);
    display(candy);

    set(candy," M&M", 6.66 , 88);
    display(candy);
    return 0;
}

void set(CandyBar & cb, string name, double weight, int calories)
{
    cb.name = name;
    cb.weight = weight;
    cb.calories = calories;
}

void display(const CandyBar & cb)
{
    cout << "CandyBar name: " << cb.name << endl;
    cout << "CandyBar weight: " << cb.weight << endl;
    cout << "CandyBar calories: " << cb.calories << endl;
}