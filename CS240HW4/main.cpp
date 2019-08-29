//Program takes an integer input from user, then
//stores the prime factorization
//Written by Andrew Delia
//stack.h and stack.cpp adapted from Nyhoff
//July 2017
//Language: C++ 98 (g++ target)
//Code Blocks

#include <iostream>

using namespace std;

#include "Stack.h"

void input (void);
void factors (int);

int main (void)
{
    cout << "This program takes an integer input from the user and finds the prime factorization ";
    cout << " of that number " << endl;
    input();

    return 0;
}

//function: input
//This function takes an integer input from the user.
//Written by Andrew Delia
//July 2017
//Language: C++ 98 (g++ target)
//Code Blocks

void input(void)
{
    int in = 0;
    cout << "Please input an integer greater than 1: ";
    cin >> in;
    if(in > 1)
    {
        factors (in);
    }
    else
    {
        cerr << "WARNING! " << in << " is not greater than 1!" << endl << endl;
        input();
    }
    return;
}

//function: factors
//This function finds the prime factors of int num and places
//them on the stack, then prints the stack
//Written by Andrew Delia
//July 2017
//Language: C++ 98 (g++ target)
//Code Blocks

void factors (int num)
{
    int prime = 0;
    Stack factors;
    cout << endl << "The prime factorization of " << num << " is: " << endl;
    for (prime = 2; prime <= num; prime++)
    {
        while (num % prime == 0)
            {
                factors.push(prime);
                num = num / prime;
            }
    }

    while(!factors.empty())
    {
        cout << factors.top();
        factors.pop();

        if(!factors.empty())
        {
            cout << " * ";
        }
        else if (factors.empty())
        {
            cout << "";
        }
    }
    cout << endl;
    return;


}
