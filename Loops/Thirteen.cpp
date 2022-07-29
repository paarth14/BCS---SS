// Write a Program to Check Whether a Number is Primeor Not?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    bool flag = true;

    cout << "Enter a Positive integer: " << endl;
    cin >> n;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Not a Prime Number" << endl;
            flag = false;
            break;
        }
    }

    if (flag == true)
    {
        cout << "Prime Number" << endl;
    }

    return 0;
}