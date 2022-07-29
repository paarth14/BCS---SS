// Write a Program to Check Whether Number is Even or Odd?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;

    cout << "Enter a positive integer: " << endl;
    cin >> num;

    if (num % 2 == 0)
    {
        cout << num << " is even" << endl;
    }

    else
    {
        cout << num << " is odd" << endl;
    }

    return 0;
}