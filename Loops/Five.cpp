// Write a Program to Display Fibonacci Series uptocertain number n (n is entered by user)
// Example: n=100
// Output:
// Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t1 = 0, t2 = 1, next_term;

    cout << "Enter a positive integer: " << endl;
    cin >> n;

    cout << "Fibonacci Series: " << t1 << " , " << t2 << " , ";

    next_term = t1 + t2;

    while (next_term <= n)
    {
        cout << next_term << " , ";
        t1 = t2;
        t2 = next_term;
        next_term = t1 + t2;
    }

    return 0;
}