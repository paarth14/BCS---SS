// Write a program where the user is asked to enter two integers (divisor and dividend) and the quotient and the remainder
// of their division is computed.(Both divisor anddividend should be integers.)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int dividend, divisor, qtnt, rmndr;

    cout << "Enter the dividend: " << endl;
    cin >> dividend;

    cout << "Enter the divisor: " << endl;
    cin >> divisor;

    qtnt = dividend / divisor;
    rmndr = dividend % divisor;

    cout << "Quotient is: " << qtnt << endl;
    cout << "Remainder is: " << rmndr << endl;
}