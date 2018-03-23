// Chapter 9 Memory Models and Namespaces, Programming Exercises #1, Page 516-517
// golf.h
const int Len = 40;

struct golf
{
    char fullname[Len];
    int handicap;
};

void setgolf(golf & g, const char * name, int hc);
int setgolf(golf & g);
void handicap(golf & g, int hc);
void showgolf(const golf & g);
