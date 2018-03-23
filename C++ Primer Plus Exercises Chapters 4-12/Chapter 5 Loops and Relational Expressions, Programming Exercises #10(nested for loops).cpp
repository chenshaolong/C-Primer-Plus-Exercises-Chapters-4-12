/*
 Writeaprogramusingnestedloopsthataskstheusertoenteravalueforthe number of rows to display. It should then display that many rows of asterisks, with one asterisk in the first row, two in the second row, and so on. For each row, the asterisks are preceded by the number of periods needed to make all the rows display a total number of characters equal to the number of rows.A sample run would look like this:
 Enter number of rows: 5
 ....* 
 ...** 
 ..*** 
 .**** 
 *****
*/


#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (j<=n-i)
                cout << ". ";
            else
                cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}