// Write a Program to Find Sum of N Natural Numbers(entered by users) using Recursion?

#include <bits/stdc++.h>
using namespace std;

int sum_of_n_numbers(int n)
{
    // Base Condition:
    if (n != 0)
    {
        return n + sum_of_n_numbers(n - 1);
    }

    return 0;
}

int main()
{
    int n;
    cout << "Enter a positive integer: " << endl;
    cin >> n;

    cout << "Sum is: " << sum_of_n_numbers(n);

    return 0;
}