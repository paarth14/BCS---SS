// Write a Program to Check Whether a Number Nentered by user is Palindrome or Not?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, num, rev = 0, rem;

    cout << "Enter a positive integer: " << endl;
    cin >> num;

    n = num;

    do
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    } while (num != 0);

    cout << "Reversed number is: " << rev << endl;

    if (n == rev)
    {
        cout << "It is Palindrome" << endl;
    }

    else
    {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}