// Chapter 10 Objects and Classes, Programming Exercises #3, Page 574-575
// chap10_3ex.h -- class definition for Golf
#ifndef GOLF_H
#define GOLF_H

class Golf
{
private:
    static const int Len = 40;
    char fullname[Len];
    int handicap;
public:
    Golf(const char * name = "no name", int hc = 0);
    int setgolf();
    void golfhc(int hc);
    void showgolf() const;
};

#endif