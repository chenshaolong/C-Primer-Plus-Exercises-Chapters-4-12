// Chapter 10 Objects and Classes, Programming Exercises #1, Page 574
// chap10_1ex.h -- class definition for a bank account
#ifndef BANK_H_
#define BANK_H_

#include <string>
using namespace std;

class Bank
{
private:
    string name;
    string account;
    long balance;
public:
    Bank();
    Bank(string depositer_name, string account_number, long money = 0);
    //Bank(string depositer_name = "no name", string account_number = "no account", long money = 0);
    ~Bank();
    void display() const;
    void deposit(long money);
    void withdraw(long money);
};

#endif
