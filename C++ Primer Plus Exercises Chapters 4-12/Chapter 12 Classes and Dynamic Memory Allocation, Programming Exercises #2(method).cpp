// Chapter 12 Classes and Dynamic Memory Allocation, Programming Exercises #2, Page 718-719
// String2.cpp -- String class methods
#include <cstring>  // string.h for some
#include <cctype> // prototypes for character functions
#include "head.h"  // include <iostream>
using std::cin;
using std::cout;

// class methods
// constructor, construct String from C string
String::String(const char * s)
{
    //cout << "constructor is called here for: \"" << s << "\" \n";
    len = std::strlen(s); // set size
    str = new char[len + 1]; // allot storage
    std::strcpy(str, s); //initialize pointer
}

// default constructor
String::String()
{
    //cout << "default constructor is called here\n";
    len = 0;
    str = new char[1];
    str[0] = '\0'; // default string
}

// copy constructor
String::String(const String & st)
{
    //cout << "copy constructor is called here for: \"" << st.str << "\" \n";
    len = st.len; // same length
    str = new char [len + 1]; // allot space
    std::strcpy(str, st.str); // copy string to new location
}

// necessary destructor
String::~String()
{
    //cout << "destructor is called here for: \"" << str << "\" \n";
    delete [] str; // required
}

// overloaded operator methods
// assignment operator, assign a String to a String
String & String::operator=(const String & st)
{
    //cout << "Assignment operator = is used here for assigning one String object to another\n";
    if (this == &st)  // object assigned to itself
        return *this;  // all done
    delete [] str;  // free old string
    len = st.len;
    str = new char [len + 1];  // get space for new string
    std::strcpy(str, st.str);  // copy the string
    return *this;  // return reference to invoking object
}

// assign a C string to a String
String & String::operator=(const char * s)
{
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

String String::operator+(const String & st)
{
    //cout << "Addition operator + is used here for two String objects\n";
    len += std::strlen(st.str);
    char * temp = str;
    str = new char[len + 1];
    std::strcat(str, temp);
    std::strcat(str, st.str);
    return *this;
}

char & String::operator[] (int i)
{
     return str[i];
}

String & String::stringlow()
{
    for (int i = 0; i < len; i++)
        str[i] = tolower(str[i]);
    return *this;
}

String & String::stringup()
{
    for (int i = 0; i < len; i++)
        str[i] = toupper(str[i]);
    return *this;
}

bool String::operator==(const String &st)
{
     return (std::strcmp(str, st.str) == 0);
}

int String::has(char c)
{
    int count = 0;
    for (int i = 0; i < len; i++)
        if (str[i] == c)
            count++;
    return count;
}

// friend methods for simple String output
/*
String operator+(const String & st1, const String & st2)
{
    cout << "Addition operator + is used here for two String objects\n";
    String temp;
    temp.len = std::strlen(st1.str) + std::strlen(st2.str);
    temp.str = new char[temp.len + 1];
    std::strcat(temp.str, st1.str);
    std::strcat(temp.str, st2.str);
    return temp;
}
*/

String operator+(const char *pc, const String &st)
{
    //cout << "Addition operator + is used here for one String object and one regular string\n";
    String temp;
    temp.len = std::strlen(pc) + std::strlen(st.str);
    temp.str = new char[temp.len + 1];
    std::strcat(temp.str, pc);
    std::strcat(temp.str, st.str);
    return temp;
}

ostream & operator<<(ostream & os, const String & st)
{
    os << st.str;
    return os;
}

// quick and dirty String input
istream & operator>>(istream & is, String & st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}