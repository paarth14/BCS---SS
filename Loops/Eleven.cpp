// Write a Program to Calculate Power of a Numberwithout using inbuilt pow() function by taking two inputs from users as Base and exponent respectively

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int exponent;
    float base, result = 1;

    cout << "Enter Base: " << endl;
    cin >> base;

    cout << "Enter Exponent: " << endl;
    cin >> exponent;

    while (exponent != 0)
    {
        result *= base;
        --exponent;
    }

    cout << "Power: " << base << "^" << exponent << " = " << result << endl;

    return 0;
}