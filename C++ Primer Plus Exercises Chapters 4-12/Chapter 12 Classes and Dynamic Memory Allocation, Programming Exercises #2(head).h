// Chapter 12 Classes and Dynamic Memory Allocation, Programming Exercises #2, Page 718-719
//string2.h
#ifndef STRING2_H_
#define STRING2_H_
#include <iostream>
using std::ostream;
using std::istream;

class String
{
private:
    char * str; // pointer to string
    int len; // length of string
    static const int CINLIM = 80; // cin input limit
public:
    // constructors and other methods
    String(const char * s); // constructor
    String(); // default constructor
    String(const String &); // copy constructor
    ~String(); // destructor
    //int length () const { return len; }
    // overloaded operator methods
    String & operator=(const String &);
    String & operator=(const char *);
    String operator+(const String & st);
    String & stringlow();
    String & stringup();
    bool operator==(const String &st);
    char & operator[] (int i);
    int has(char c);
    // overloaded operator friends
    //friend String operator+(const String & st1, const String & st2);
    friend String operator+(const char *, const String &);
    friend ostream & operator<<(ostream & os, const String & st);
    friend istream & operator>>(istream & is, String & st);
};

#endif