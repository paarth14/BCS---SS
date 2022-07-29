// Write a Program to check whether a number enteredby the user is an Armstrong number or not.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, num, rem, res = 0;

    cout << "Enter a three digit positive integer: " << endl;
    cin >> num;

    n = num;

    while (num != 0)
    {
        rem = num % 10;
        res += rem * rem * rem;
        num /= 10;
    }

    if (res == n)
    {
        cout << n << " is an Armstrong number" << endl;
    }

    else
    {
        cout << n << " is not an Armstrong number" << endl;
    }

    return 0;
}