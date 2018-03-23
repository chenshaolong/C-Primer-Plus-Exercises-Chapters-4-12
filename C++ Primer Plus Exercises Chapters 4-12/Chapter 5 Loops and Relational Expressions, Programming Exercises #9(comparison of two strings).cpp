/* Chapter 5 Loops and Relational Expressions Programming Exercises #9(comparison of two strings)
 Write a program that uses an array of char and a loop to read one word at a time until the word done is entered.The program should then report the number of words entered (not counting done). A sample run could look like this:
 Enter words (to stop, type the word done):
 anteater birthday category dumpster 
 envy finagle geometry done for sure 
 You entered a total of 7 words.
 
 You should use a string class object instead of an array. Include the string header file and use a relational operator to make the comparison test.
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    string word;
    cout << "Enter words (to stop, type the word done):\n";
    getline(cin, word);
    int n=0;
    for (; word != "done"; n++)
        getline(cin, word);
    /* while(word != "done")
    {
        getline(cin, word);
        n++;
    }*/
    cout << "You entered a total of " << n << " words\n";

    return 0;
}