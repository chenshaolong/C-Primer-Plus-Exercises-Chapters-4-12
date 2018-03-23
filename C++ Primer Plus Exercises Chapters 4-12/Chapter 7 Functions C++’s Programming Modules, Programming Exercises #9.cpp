//  Chapter 7 Functions: C++’s Programming Modules, Programming Exercises #9, Page 390-391
/*  This exercise provides practice in writing functions dealing with arrays and struc- tures.The following is a program skeleton. Complete it by providing the described functions:
 int getinfo(student pt[], int size);
 void display1(student st);
 void display2(const student * ps);
 void display3(const student pa[], int n);
*/
#include <iostream>
#include <string>
using namespace std;
const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pt[], int size);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
           
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done.\n";
    return 0;
}

int getinfo(student pt[], int size)
{
    int i = 0;
    while(i < size)
    {
        cout << "Please enter the structure's fullname: ";
        cin.getline(pt[i].fullname, SLEN);
        cout << "Please enter the structure's hobby: ";
        cin.getline(pt[i].hobby, SLEN);
        cout << "Please enter the structure's ooplevel: ";
        cin >> pt[i].ooplevel;
        cin.get();
        i++;
    }
    return i;
}

void display1(student st)
{
    cout << "The structure's contents are: \n";
    cout << "Fullname: " << st.fullname << endl;
    cout << "Hobby: " << st.hobby << endl;
    cout << "ooplevel: " << st.ooplevel << endl;
}

void display2(const student * ps)
{
    cout << "The structure's contents are: \n";
    cout << "Fullname: " << ps->fullname << endl;
    cout << "Hobby: " << ps->hobby << endl;
    cout << "ooplevel: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "The structure's contents are: \n";
        cout << "Fullname: " << pa[i].fullname << endl;
        cout << "Hobby: " << pa[i].hobby << endl;
        cout << "ooplevel: " << pa[i].ooplevel << endl;
    }
}