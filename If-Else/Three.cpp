// Write a Program to Find Largest Number Among ThreeNumbers entered by users?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter First Number: " << endl;
    cin >> num1;

    cout << "Enter Second Number: " << endl;
    cin >> num2;

    cout << "Enter Third Number: " << endl;
    cin >> num3;

    if (num1 >= num2 && num1 >= num3)
    {
        cout << "Largest number is: " << num1 << endl;
    }

    else if (num2 >= num1 && num2 >= num3)
    {
        cout << "Largest number is: " << num2 << endl;
    }

    else
    {
        cout << "Largest number is: " << num3 << endl;
    }

    return 0;
}