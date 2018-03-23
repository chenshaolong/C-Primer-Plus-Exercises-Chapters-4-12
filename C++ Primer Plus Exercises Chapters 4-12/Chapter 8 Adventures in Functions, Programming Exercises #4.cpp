// Chapter 8 Adventures in Functions, Programming Exercises #4, Page 461
/*  Complete this skeleton by providing the described functions and prototypes. Note that there should be two show() functions, each using default arguments. Use const arguments when appropriate. Note that set() should use new to allocate sufficient space to hold the designated string.The techniques used here are similar to those used in designing and implementing classes. (You might have to alter the header filenames and delete the using directive, depending on your compiler.)
 */

#include <iostream> 
#include <cstring>
using namespace std;

struct stringy
{
    char * str;
    int ct;
};

void set(stringy & st, char * ss);
void show(string str, int n = 1);
void show(stringy st, int n = 1);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    delete beany.str;
    return 0;
}

void set(stringy & st, char * ss)
{
    st.ct = strlen(ss);
    st.str = new char[st.ct+1];
    strcpy(st.str, ss);
}

void show(string str, int n)
{
    while (n-->0)
        cout << str << endl;
    cout << "=================================\n";
}

void show(stringy st, int n)
{
    while (n-->0)
        cout << st.str << endl;
   cout << "=================================\n";
}
