// Write a Program to Find G.C.D of two numbers entered byuser Using Recursion?

#include <bits/stdc++.h>
using namespace std;

int my_gcd(int num1, int num2)
{
    if (num2 != 0)
    {
        return my_gcd(num2, num1 % num2);
    }

    else
    {
        return num1;
    }
}

int main()
{
    int num1, num2;

    cout << "Enter First Number: " << endl;
    cin >> num1;

    cout << "Enter Second Number: " << endl;
    cin >> num2;

    cout << "GCD is: " << my_gcd(num1, num2);

    return 0;
}