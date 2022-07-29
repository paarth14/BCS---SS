// Write a Program to Generate Multiplication Table of a number (entered by the user) using a for loop.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, range;

    cout << "Enter a positive integer: " << endl;
    cin >> n;

    cout << "Enter the range of interval: " << endl;
    cin >> range;

    for (int i = 1; i <= range; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}