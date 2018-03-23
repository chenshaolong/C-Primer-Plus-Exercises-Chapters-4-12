//Chapter 9 Memory Models and Namespaces, Storage Duration, Scope, and Linkage, Page492
//initialize a variable as part of the dynamic memory allocation
//g++ -std=c++11 main.cpp && ./a.out or clang++ -std=c++11 main.cpp && ./a.out to excute
#include <iostream>
using namespace std;

int main()
{
    int *pi = new int (6);   //with C++11, int *pi = new int {6}
    cout << "*pi = " << *pi << endl;
    delete pi;
    double * pd = new double (99.99);   //with C++11, double * pd = new double {99.99}
    cout << "*pd = " << *pd << endl;
    delete pd;
    
    struct where {double x; double y; double z;};
    where * one = new where {2.5, 5.3, 7.2};   //with C++11
    cout << "*one.x = " << one->x << endl;
    cout << "*one.y = " << one->y << endl;
    cout << "*one.z = " << one->z << endl;
    
    delete one;
    
    int * ar = new int [4] {2,4,6,7};   //with C++11
    for (int i = 0; i< 4; i++)
        cout << "*ar[" << i << "] = " << ar[i] << endl;
    delete [] ar;
    
    return 0;
}