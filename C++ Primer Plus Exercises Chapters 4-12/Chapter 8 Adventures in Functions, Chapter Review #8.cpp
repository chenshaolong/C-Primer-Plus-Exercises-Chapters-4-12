// Chapter 8 Adventures in Functions, Chapter Review #8, Page 459
//  Given the template of Chapter Review Question 7 and the box structure of Chapter Review Question 4, provide a template specialization that takes two box arguments and returns the one with the larger volume.
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

template <typename T>  // template, which is necessay for explicit specialization
T larger(T x, T y);
template <> box larger(box x, box y);  //explicit specialization
template <> box & larger(box & x, box & y); //explicit specialization with reference
template <> box * larger(box * x, box * y); //explicit specialization with pointer
void display(box x);


int main()
{
    
    box x = {"AAA", 1.1, 2.2, 3.3, 6.6};
    box y = {"BBB", -3.3, -2.2, -1.1, -8.8};
    display(x);
    display(y);
    
    clock_t t1 = clock();
    box z1 = larger(x,y);
    display(z1);
    clock_t t2 = clock() - t1;  // t2 = t2 * CLOCKS_PER_SEC t oconvert into seconds
    cout << "Time elipsed is: " << t2 << endl;
    
    
    clock_t t3 = clock();
    box z2 = larger(x,y);
    display(z2);
    clock_t t4 = clock() - t3;
    cout << "Time elipsed with reference is: " << t4 << endl;
    
    
    clock_t t5 = clock();
    box * z3 = larger(&x,&y);
    display(*z3);
    clock_t t6 = clock() - t5;
    cout << "Time elipsed with pointer is: " << t6 << endl;
    
    cout << "Conclusion: \n";
    cout << "The reference method uses the least amount of time.\n";
    cout << "while passing by value uses the most amount of time.\n";
    cout << "and the pointer method is in between.\n";
    
    return 0;
}

template <> box larger(box x, box y)
//box larger(box x, box y)
{
    cout << "Explicit specialization : \n";
    return x.volume > y.volume ? x : y;
}

template <> box & larger(box & x, box & y)
//box larger(box x, box y)
{
    cout << "Explicit specialization with pointer: \n";
    return x.volume > y.volume ? x : y;
}

template <> box * larger(box * x, box * y)
//box larger(box x, box y)
{
    cout << "Explicit specialization with pointer: \n";
    return x->volume > y->volume ? x : y;
}


void display(box x)
{
    cout << x.maker << endl;
    cout << x.height << endl;
    cout << x.width << endl;
    cout << x.length << endl;
    cout << x.volume << endl;
}