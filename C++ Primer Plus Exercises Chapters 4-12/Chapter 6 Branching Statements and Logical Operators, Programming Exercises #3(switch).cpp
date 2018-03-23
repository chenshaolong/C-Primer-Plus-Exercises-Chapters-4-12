/* Chapter 6 Branching Statements and Logical Operators Exercises #3, Page 316
 //  Write a precursor to a menu-driven program.The program should display a menu offering four choices, each labeled with a letter. If the user responds with a letter other than one of the four valid choices, the program should prompt the user to enter a valid response until the user complies.Then the program should use a switch to select a simple action based on the user’s selection.A program run could look something like this:
 Please enter one of the following choices:
 c) carnivore     p) pianis
 t) tree          g) game
 */

#include <iostream>
using namespace std;

int main()
{
    cout << "Please enter one of the following choices:\n"
         << " c) carnivore       p) pianist"
         << " t) tree            g) game\n";
    cout << "Please enter a c, p, t, or g: ";
    char choice;
    cin >> choice;
    while (choice != 'q' && choice != 'Q')
    {
        switch(choice)
        {
            case 'c' :
            case 'C' : cout << "A mammal is a carnivore.\n";
                       break;
            case 'p' :
            case 'P' : cout << "She is a pianist.\n";
                       break;
            case 't' :
            case 'T' : cout << "A maple is a tree.\n";
                       break;
            case 'g' :
            case 'G' : cout << "Pokmon is an awesome game.\n";
                       break;
            default: cout << "Please enter a valid response, c, p, t, or g:\n";
        }
        cin >> choice;
    }
    cout << "Bye\n";
    
    return 0;
}