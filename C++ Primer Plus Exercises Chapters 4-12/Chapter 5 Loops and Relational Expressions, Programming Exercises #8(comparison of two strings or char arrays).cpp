/* Chapter 5 Loops and Relational Expressions Programming Exercises #8(comparison of char arrays)
 Write a program that uses an array of char and a loop to read one word at a time until the word done is entered.The program should then report the number of words entered (not counting done). A sample run could look like this:
 Enter words (to stop, type the word done):
 anteater birthday category dumpster 
 envy finagle geometry done for sure 
 You entered a total of 7 words.
 
 You should include the cstring header file and use the strcmp() function to make the comparison test.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    char word[60];
    cout << "Enter words (to stop, type the word done):\n";
    cin.getline(word, 60);
    int n;
    // have to use strcmp(str1,str2) to compare str1 and str2 with including the header #include <string>
    for (n=0;strcmp(word,"done")!=0; n++) // or strcmp(word,"done")
        cin.getline(word, 60);
    /* while(word != "done")
    {
        getline(cin, word);
        n++;
    }*/
    cout << "You entered a total of " << n << " words\n";

    return 0;
}