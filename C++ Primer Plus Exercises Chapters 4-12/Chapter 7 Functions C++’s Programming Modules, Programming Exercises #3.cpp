// // Chapter 7 Functions: C++’s Programming Modules, Programming Exercises #3, Page 389
/*  Here is a structure declaration:
 struct box 
 {
     char maker[40]; 
     float height; 
     float width; 
     float length; 
     float volume;
 };
 a. Write a function that passes a box structure by value and that displays the value of each member.
 b. Write a function that passes the address of a box structure and that sets the volume member to the product of the other three dimensions.
 c. Write a simple program that uses these two functions.
*/
#include <iostream>
using namespace std;
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void f1(box strbox);
void f2(box * strbox);

int main()
{
    box strbox = {"Ferrari", 1.5, 2.2, 3.2, 8.8};
    f1(strbox);
    f2(&strbox);
    f1(strbox);
    return 0;
}

void f1(box strbox)
{
    cout << "Name: " << strbox.maker << endl;
    cout << "Name: " << strbox.height << endl;
    cout << "Name: " << strbox.width << endl;
    cout << "Name: " << strbox.length << endl;
    cout << "Name: " << strbox.volume << endl;

}

void f2(box * strbox)
{
    strbox->volume = strbox->height * strbox->width * strbox->length;
}
