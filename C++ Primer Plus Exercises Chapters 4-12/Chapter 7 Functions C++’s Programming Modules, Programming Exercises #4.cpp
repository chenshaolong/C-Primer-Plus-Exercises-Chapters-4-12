//  Chapter 7 Functions: C++’s Programming Modules, Programming Exercises #4, Page 389-390
/*  ManystatelotteriesuseavariationofthesimplelotteryportrayedbyListing7.4.In these variations you choose several numbers from one set and call them the field numbers. For example, you might select five numbers from the field of 1–47).You also pick a single number (called a mega number or a power ball, etc.) from a sec- ond range, such as 1–27.To win the grand prize, you have to guess all the picks cor- rectly.The chance of winning is the product of the probability of picking all the field numbers times the probability of picking the mega number. For instance, probability of winning the example described here is the product of the probability of picking 5 out of 47 correctly times the probability of picking 1 out of 27 cor- rectly. Modify Listing 7.4 to calculate the probability of winning this kind of lottery.*/
#include <iostream>
using namespace std;

long double probability(unsigned numbers, unsigned picks, unsigned mega_number);

int main()
{
    double total, choices, mega_number;
    cout << "Enter the total number of choices on the game card and\n"
    "the number of picks allowed and\n"
    "the mega number\n";
    while ((cin >> total >> choices >>mega_number) && choices <= total)
    {
        cout << "You have one chance in ";
        cout << probability(total, choices,mega_number);
        cout << " of winning.\n";
        cout << "Next three numbers (q to quit): ";
    }
    cout << "bye\n";
    return 0;
}

long double probability(unsigned numbers, unsigned picks, unsigned mega_number)
{
    long double result = 1.0; // here come some local variables
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p ;
    result *= mega_number;
    return result;
}