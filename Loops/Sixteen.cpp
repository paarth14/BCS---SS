// Write a Program to Display all Factors of a Number entered by User?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;

    cout << "Enter a positive integer: " << endl;
    cin >> num;

    cout << "Factors of " << num << " are: ";

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " , ";
        }
    }

    return 0;
}