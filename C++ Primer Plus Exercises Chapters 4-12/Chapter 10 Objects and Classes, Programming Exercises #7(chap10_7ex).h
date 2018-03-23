// Chapter 10 Objects and Classes, Programming Exercises #7, Page 576
// chap10_7ex.h -- class definition for Plorg
#ifndef PLORG_H
#define PLORG_H

class Plorg
{
private:
    static const int length = 20;
    char name [length];
    int CI;
public:
    Plorg(const char * nm = "Plorga");
    void CIchange(int ci);
    void report() const;
};

#endif

