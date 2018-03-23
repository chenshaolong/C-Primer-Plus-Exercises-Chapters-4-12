// Chapter 6 Branching Statements and Logical Operators, Programming Exercises #4, Page 316-317
/*  When you join the Benevolent Order of Programmers, you can be known at BOP meetings by your real name, your job title, or your secret BOP name.Write a pro- gram that can list members by real name, by job title, by secret name, or by a mem- ber’s preference. Base the program on the following structure:
 Benevolent Order of Programmers name structure struct bop 
 {
 char fullname[strsize]; // real name
 char title[strsize]; // job title
 char bopname[strsize]; // secret BOP name
 int preference; // 0 = fullname, 1 = title, 2 = bopname
 };
 In the program, create a small array of such structures and initialize it to suitable values. Have the program run a loop that lets the user select from different alterna- tives:
 a. display by name       b. display by title
 c. display by bopname    d. display by preference
 q. quit
 Note that “display by preference” does not mean display the preference member; it means display the member corresponding to the preference number. For instance, if preference is 1, choice d would display the programmer’s job title. A sample run may look something like the following:
 Benevolent Order of Programmers Report
 a. display by name          b. display by title
 c. display by bopname       d. display by preference
 q. quit;
*/


#include <iostream>
#include <string>
using namespace std;
const int array_size = 5;

struct bop
{
    string fullname; // real name
    string title;    // job title
    string bopname;  // secret BOP name
    int preference;  // 0 = fullname, 1 = title, 2 = bopname
};

//function prototypes
void showmenu();
void display_fullname(bop report[array_size]);
void display_title(bop report[array_size]);
void display_bopname(bop report[array_size]);
void display_preference(bop report[array_size]);



int main()
{
    bop report [array_size] =
    {
        {"Wimp Macho", "Junior Programmer", "Ohcam Pmiw", 0},
        {"Raki Rhodes", "Manager", "Sedohr Ikar", 1},
        {"Celia Laiter", "CEO", "retial Ailec", 2},
        {"Hoppy Hipman", "President", "Nampih Yppoh", 1},
        {"Pat Hand", "Professor", "Dnah Tap", 0}
    };
    
    showmenu();
    char choice;
    cin >> choice;
    while (choice != 'q' && choice != 'Q')
    {
       switch(choice)
       {
           case 'a':
           case 'A':
               display_fullname(report);
               break;
           case 'b':
           case 'B':
               display_title(report);
               break;
           case 'c':
           case 'C':
               display_bopname(report);
               break;
           case 'd':
           case 'D':
               display_preference(report);
               break;
           default :
               cout << "That's not a choice.\n";
               cout << "Enter your choice from a, b, c, d, q: ";
        }
        cin >> choice;
    }
    
    cout << "Bye!\n";
    return 0;
}

void showmenu()
{
    cout << "Benevolent Order of Programmers Report\n"
         << "a. display by name          b. display by title\n"
         << "c. display by bopname       d. display by preference\n"
         << "q. quit\n";
    cout << "Enter your choice: ";
}
               
void display_fullname(bop report[array_size])
{
    for (int i=0; i <array_size; i++)
        cout << report[i].fullname << endl;
    cout << "Next choice: ";
}
               
void display_title(bop report[array_size])
{
    for (int i=0; i <array_size; i++)
        cout << report[i].title << endl;
    cout << "Next choice: ";
}

void display_bopname(bop report[array_size])
{
    for (int i=0; i <array_size; i++)
        cout << report[i].bopname << endl;
    cout << "Next choice: ";
}

void display_preference(bop report[array_size])
{
    for (int i=0; i <array_size; i++)
    {
        if (report[i].preference==0)
            cout << report[i].fullname << endl;
        else if (report[i].preference==1)
            cout << report[i].title << endl;
        else
            cout << report[i].bopname << endl;
    }
    cout << "Next choice: ";
}



