// Chapter 6 Branching Statements and Logical Operators, Programming Excirise #1
/*  Write a program that reads input a word at a time until a lone q is entered.The program should then report the number of words that began with vowels, the num- ber that began with consonants, and the number that fit neither of those categories. One approach is to use isalpha() to discriminate between words beginning with letters and those that don’t and then use an if or switch statement to further iden- tify those passing the isalpha() test that begin with vowels. A sample run might look like this:
 Enter words (q to quit):
 The 12 awesome oxen ambled
 quietly across 15 meters of lawn. q
 5 words beginning with vowels
 4 words beginning with consonants
 2 others
 */


#include <iostream>
#include <string>
#include <cctype>
using namespace std;


int main()
{
    cout << "Enter words (q to quit):\n";
    string word;
    int vowels=0;
    int consonants=0;
    int others=0;
    cin >> word;
    while (word != "q" && word != "Q") //have to use double quotation("") rather than single quotation(' ') to compare strings
    {
        if (isalpha(word[0]))
            switch (word[0])
            {
                case 'a':
                case 'A':
                case 'e':
                case 'E':
                case 'i':
                case 'I':
                case 'o':
                case 'O':
                case 'u':
                case 'U':
                    vowels++;
                    break;
                    
                default:
                    consonants++;
                    break;
            }
        else
            others++;
        cin >> word;
    }
    cout << vowels << " words beginning with vowels\n";
    cout << consonants << " words beginning with consonants\n";
    cout << others << " others\n";
    
    return 0;
}