// Chapter 10 Objects and Classes, Programming Exercises #2, Page 574
// chap10_2ex.h -- class definition for Person
#ifndef NAME_H
#define NAME_H

#include <string>
using namespace std;

class Person
{ private:
    static const int LIMIT = 25;
    string lname; // Person’s last name
    char fname[LIMIT]; // Person’s first name
public:
    Person() {lname = ""; fname[0] = '\0'; } // #1
    Person(const string & ln, const char * fn = "Heyyou");
    // the following methods display lname and fname
    void Show() const; // firstname lastname format
    void FormalShow() const; // lastname, firstname format
};

#endif