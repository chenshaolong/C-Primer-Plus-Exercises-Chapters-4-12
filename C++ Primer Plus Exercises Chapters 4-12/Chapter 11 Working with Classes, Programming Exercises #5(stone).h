// Chapter 11 Working with Classes, Programming Exercises #5, Page 639
// stone.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_

static const int Lbs_per_stn = 14;  // pounds per stone
enum Mode {st, fp, ip};
//st = stone form, fp = floating-point pounds form,  ip = integer pounds form

class Stonewt
{ private:
    double stone;                   // entire weight in stones
    double pounds;                  // entire weight in pounds
    int pound;                      // entire weight in integer pounds
    Mode mode;
public:
    Stonewt();                      // default constructor
    Stonewt(double weight, Mode form = fp);  // constructor for double pounds
    ~Stonewt();
    Stonewt operator+(const Stonewt & st) const;
    Stonewt operator-(const Stonewt & st) const;
    Stonewt operator*(double n) const;
    friend Stonewt operator*(double n, const Stonewt & st);
    friend std::ostream & operator<<(std::ostream & os, const Stonewt & st);
};

#endif