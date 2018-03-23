// Chapter 10 Objects and Classes, Programming Exercises #1, Page 574
//chap10_1ex2.cpp -- Bank member functions
#include <iostream>
#include "chap10_1ex.h"
using namespace std;

Bank::Bank()
{
    cout << "$$$ Default constructor is used here. $$$\n";
    name = "no name";
    account = "no account";
    balance = 0;
}

Bank::Bank(string depositer_name, string account_number, long money)
{
    name = depositer_name;
    cout << "$$$ Constructor is used here for " << name << ". $$$\n";
    account = account_number;
    if (money < 0)
    {
        cout << "Balance can’t be negative; " << name << "'s balance set to 0.\n";
        balance = 0;
    }
    else
        balance = money;
}

Bank::~Bank()
{
    cout << "$$$ Destructor is used here for " << name << ". Bye! $$$\n";
}

void Bank::display() const
{
    cout << " Name: " << name << endl;
    cout << " Account: " << account << endl;
    cout << " Balance: " << balance << endl;
}

void Bank::deposit(long money)
{
    if (money < 0)
        cout << "Money deposited can’t be negative. Transaction is aborted.\n";
    else
        balance += money;
}

void Bank::withdraw(long money)
{
    if (money < 0)
        cout << "Money withdrew can’t be negative. Transaction is aborted.\n";
    else if (money > balance)
        cout << "You can’t withdraw more than you have! Transaction is aborted.\n";
    else
        balance -= money;
}