// Sum of Digits of a number.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0, rem;

    cout << "Enter a positive integer: " << endl;
    cin >> n;

    while (n != 0)
    {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }

    cout << "Sum of Digits: " << sum << endl;

    return 0;
}