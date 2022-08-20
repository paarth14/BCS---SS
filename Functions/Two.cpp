// Write a Program to check if an integer (entered by the user) can be expressed as the sum of two prime numbers,if yes then print all possible combinations with the use of functions.
// Example -
// Enter a positive integer: 34
// OUTPUT:
// 34 = 3 + 31
// 34 = 5 + 29
// 34 = 11 + 23
// 34 = 17 + 17

#include <bits/stdc++.h>
using namespace std;

bool check_prime(int n)
{
    bool isPrime = true;

    if (n == 0 || n == 1)
    {
        isPrime = false;
    }

    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    return isPrime;
}

int main()
{
    int n;

    bool flag = false;

    cout << "Enter a positive integer: " << endl;
    cin >> n;

    for (int i = 2; i <= n / 2; i++)
    {
        if (check_prime(i))
        {
            if (check_prime(n - i))
            {
                cout << n << " = " << i << " + " << n - i << endl;
                flag = true;
            }
        }
    }

    if (!flag)
    {
        cout << n << " can't be expressed as a sum of two prime numbers.";
    }

    return 0;
}
