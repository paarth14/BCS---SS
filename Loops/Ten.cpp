// Write a Program to Calculate Power of a Numberusing inbuilt pow() function by taking two inputs fromusers as Base and exponent respectively?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    float base, exponent, result;

    cout << "Enter Base: " << endl;
    cin >> base;

    cout << "Enter Exponent: " << endl;
    cin >> exponent;

    result = pow(base, exponent);

    cout << "Power of " << base << "^" << exponent << " is: " << result << endl;

    return 0;
}