// Chapter 6 Branching Statements and Logical Operators, Excirise 1 Page 316
#include <iostream>
#include <ctype>              // prototypes for character functions
using namespace std;

int main()
{
    cout << "Enter text for analysis, and type @ to terminate input.\n";
    char ch;
    //use the following sentences.
    //Linxi is my girfriend. We love each other so much. We have been together for more than 6 months.@
    while((ch = cin.get()) != '@')            // test for sentinel
    {
        if(isupper(ch))
            cout << char(tolower(ch));  // force type cast int to char
        else if(islower(ch))
            cout << (char)toupper(ch);  // force type cast int to char
        else
            cout << ch;
    }
    cout << endl;
    return 0;
}
