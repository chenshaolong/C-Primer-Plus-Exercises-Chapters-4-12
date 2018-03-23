// Chapter 9 Memory Models and Namespaces, Programming Exercises #3, Page 517
/* Begin with the following structure declaration:
 struct chaff
 {
 char dross[20];
 int slag;
 };
 //  Write a program that uses placement new to place an array of two such structures in a buffer.Then assign values to the structure members (remembering to use strcpy() for the char array) and use a loop to display the contents. Option 1 is to use a static array, like that in Listing 9.10, for the buffer. Option 2 is to use regular new to allocate the buffer.
 */

#include <iostream>
//#include <new>   // for placement new, optional
using namespace std;
const int BUF = 512;
const int n = 2;
char buffer[BUF];   // chunk of memory
struct chaff
{
    char dross[20];
    int slag;
};

void show(const chaff * strchaff);

int main()
{
    chaff *pt [n];
    cout << "Calling placement new:\n";
    for (int i = 0; i < n; i++)
    {
        pt[i] = new (buffer + i * sizeof(chaff)) chaff;// have to manage the memory location mannually to avoid overwritting
        cout << "Please enter a line for dross: ";
        char temp[20];
        cin.getline(temp, 20);
        strcpy(pt[i]->dross,temp);
        cout << "Please enter a number for slag: ";
        cin >> pt[i]->slag;
        cin.get();
    }
    for (int i = 0; i < n; i++)
        show(pt[i]);
    
    return 0;
}

void show(const chaff * strchaff)
{
    cout << "dross: " << strchaff->dross << ", slag: " << strchaff->slag << endl;
}