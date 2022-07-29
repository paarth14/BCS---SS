// Write a Program to Reverse a given Number N by user?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, rev = 0, rem;

    cout << "Enter a positive integer: " << endl;
    cin >> n;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    cout << "Reversed Number is: " << rev << endl;

    return 0;
}