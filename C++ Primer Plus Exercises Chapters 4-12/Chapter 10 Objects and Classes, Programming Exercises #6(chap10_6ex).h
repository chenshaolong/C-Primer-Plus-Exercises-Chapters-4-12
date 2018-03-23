// Chapter 10 Objects and Classes, Programming Exercises #6, Page 575
// chap10_6ex.h -- class definition for Move
#ifndef MOVE_H
#define MOVE_H

class Move
{
private:
    double x;
    double y;
public:
    Move(double a = 0, double b = 0);
    void showmove() const;
    Move add(const Move & m) const;
    void reset(double a = 0, double b = 0);
};

#endif

