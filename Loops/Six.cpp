// Write a Program to Find GCD or HCF of two numbers entered by user?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2, hcf;

    cout << "Enter First Number: " << endl;
    cin >> num1;

    cout << "Enter Second Number: " << endl;
    cin >> num2;

    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }

    cout << "HCF of " << num1 << " & " << num2 << " is: " << hcf << endl;

    return 0;
}