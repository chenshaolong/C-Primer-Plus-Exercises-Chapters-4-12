// Chapter 10 Objects and Classes, Programming Exercises #1, Page 574
//chap10_1ex1.cpp -- testing the Bank class
#include <iostream>
#include "chap10_1ex.h"
using namespace std;


int main()
{
    Bank bank; //Default constructor is used here
    bank.display();
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n";
    bank = Bank("Shaolong Chen", "BOA"); //Constructor is used here and then destructor is used here
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n";
    bank.display();
    bank.deposit(888888);
    bank.display();
    bank.withdraw(999999);
    bank.display();
    bank.withdraw(222222);
    bank.display();
    cout << "\nReset the account\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n";
    bank = Bank(); //Default constructor is used here and then destructor is used here
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n";
    bank.display();
    
    cout << "\nSecond account\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n";
    Bank bank2 = Bank("Linxi Luo", "Chase", 66666666); //Constructor is used here
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n";
    bank2.display();
    
    cout << "\nThird account\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n";
    Bank bank3("Yan Tang", "Citi", 69696969); //Constructor is used here
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n";
    bank3.display();
    
    cout << "\nAccount array\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n";
    Bank bankarray [2];//Default constructor is used here for creating each object in the class array
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n";
    bankarray[0] = Bank("Tang Tang", "ABC", 12345678); //Constructor is used here and then destructor is used here
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n";
    bankarray[0].display();
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n";
    bankarray[1] = Bank("Yan Yan", "CBA", 87654321);  //Constructor is used here and then destructor is used here
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n";
    bankarray[1].display();
    
    cout << "\nAccount array with initializztion\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n";
    Bank bankarray0[2] = {Bank("Long Long", "AOA", 9519058691), Bank("Wei Wei", "BOB", 135724789)};//Constructor is used here for creating each object in the class array
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n";
    bankarray0[0].display();
    bankarray0[1].display();
    
    cout << "\nAccount array with pointers\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n";
    Bank * bankarray2 =new Bank [2];//Default constructor is used here for creating each object in the class array
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n";
    bankarray2[0] = Bank("Qi Li", "ICBC", 999666); //Constructor is used here and then destructor is used here
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n";
    bankarray2[0].display();
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n";
    bankarray2[1] = Bank("Yuanyuan Gao", "BOC", 868686);//Constructor is used here and then destructor is used here
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n";
    bankarray2[1].display();
    
    cout <<"\nConclusion: It does not create a temporary object when declare class objects with initialization at the first place. While using a constructor in an assignment statement to set values to existing class objects always causes the creation of a temporary object before assignment occurs. Page 551\n\n";
    
    delete [] bankarray2;
    
    return 0;
}