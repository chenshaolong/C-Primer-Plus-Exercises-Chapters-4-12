/*  Chapter 6 Branching Statements and Logical Operators, Programming Exercises #6, Page 317-318
//  Put together a program that keeps track of monetary contributions to the Society for the Preservation of Rightful Influence. It should ask the user to enter the num- ber of contributors and then solicit the user to enter the name and contribution of each contributor.The information should be stored in a dynamically allocated array of structures. Each structure should have two members: a character array (or else a string object) to store the name and a double member to hold the amount of the contribution.After reading all the data, the program should display the names and amounts donated for all donors who contributed $10,000 or more.This list should be headed by the label Grand Patrons.After that,the program should list the remaining donors.That list should be headed Patrons. If there are no donors in one of the categories, the program should print the word “none.”Aside from displaying two categories, the program need do no sorting.
 */

#include <iostream>
#include <string>
using namespace std;
const int limit = 10000;

struct contribution
{
    string name;
    double amount;
};

int main()
{
    int n;
    cout << "Please enter an integer number: ";
    cin >> n;
    cin.get(); // have to add cin.get() to make sure newline character(\n) after cin >> n is taken care of.
    if (n==0)
        cout << "None.\n";
    else
    {
        contribution * donors = new contribution [n];
        for (int i=0; i<n; i++)
        {
            cout << "Please enter #" << i+1 << " donor's name: ";
            getline(cin, donors[i].name);
            cout << "Please enter #" << i+1 << " donor's donation amount: ";
            cin >> donors[i].amount;
            cin.get(); // have to add cin.get() to make sure newline character(\n) after cin >> n is taken care of.
        }
        cout << "Grand Patrons\n";
        for (int i=0; i<n; i++)
            if (donors[i].amount >= limit)
                cout << donors[i].name << " donates " << donors[i].amount << endl;
        
        delete [] donors;
    }
    
    return 0;
}