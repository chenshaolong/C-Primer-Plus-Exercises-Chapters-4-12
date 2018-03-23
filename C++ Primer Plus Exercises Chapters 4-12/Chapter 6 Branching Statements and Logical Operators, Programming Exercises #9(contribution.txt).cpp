//
/*  Do Programming Exercise 6 but modify it to get information from a file.The first item in the file should be the number of contributors, and the rest of the file should consist of pairs of lines, with the first line of each pair being a contributor’s name and the second line being a contribution.That is, the file should look like this:
4
Sam Stone 
2000
Freida Flass
100500
Tammy Tubbs 
5000
Rich Raptor
55000
*/

#include <iostream>
#include <fstream>
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
    ifstream fin;
    fin.open("contribution.txt");
    int n;
    fin >> n;
    fin.get(); // have to add fin.get() rather than cin.get() to make sure newline character(\n) after fin >> n is taken care of.
    if (n==0)
        cout << "None.\n";
    else
    {
        contribution * donors = new contribution [n];
        for (int i=0; i<n; i++)
        {
            getline(fin, donors[i].name);
            fin >> donors[i].amount;
            fin.get(); // have to add fin.get() to make sure newline character(\n) after fin >> n is taken care of.
        }
        cout << "Grand Patrons\n";
        for (int i=0; i<n; i++)
            if (donors[i].amount >= limit)
                cout << donors[i].name << " donates " << donors[i].amount << endl;
        
        delete [] donors;
    }
    fin.close();
    return 0;
}