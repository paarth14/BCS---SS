// Write a Program to Find LCM of two numbers entered by user?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2, mul, lcm;

    cout << "Enter First Number: " << endl;
    cin >> num1;

    cout << "Enter Second Number: " << endl;
    cin >> num2;

    mul = num1 * num2;

    for (int i = 1; i <= mul; i++)
    {
        if (mul % i == 0 && i % num1 == 0 && i % num2 == 0)
        {
            lcm = i;
            break;
        }
    }

    cout << "LCM of " << num1 << " & " << num2 << " = " << lcm << endl;

    return 0;
}