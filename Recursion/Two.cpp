// Write a Program to Calculate Factorial of a Number Using Recursion?

#include <bits/stdc++.h>
using namespace std;

int my_fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * my_fact(n - 1);
}

int main()
{
    int n;

    cout << "Enter a positive integter: " << endl;
    cin >> n;

    cout << "Factorial is: " << my_fact(n);

    return 0;
}