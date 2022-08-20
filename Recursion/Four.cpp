// Write a Program that calculates the power of a numberusing recursion where base and exponent is entered by the user?

#include <bits/stdc++.h>
using namespace std;

int my_power(int n1, int n2)
{
    if (n2 == 0)
    {
        return 1;
    }

    return n1 * my_power(n1, n2 - 1);
}

int main()
{
    int base, exponent;

    cout << "Enter Base: " << endl;
    cin >> base;

    cout << "Enter Exponent: " << endl;
    cin >> exponent;

    cout << "Power is: " << my_power(base, exponent);

    return 0;
}