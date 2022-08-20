// Write a Program to Display Prime Numbers Between TwoIntervals (entered by the user) Using Functions?

#include <bits/stdc++.h>
using namespace std;

int check_prime(int n)
{
    bool is_prime = true;

    if (n == 0 || n == 1)
    {
        is_prime = false;
    }

    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                is_prime = false;
                break;
            }
        }
    }

    return is_prime;
}

int main()
{
    int low, high;

    bool flag;

    cout << "Enter Lowest Number: " << endl;
    cin >> low;

    cout << "Enter Highest Number: " << endl;
    cin >> high;

    // swapping if(low>high)
    if (low > high)
    {
        int temp = low;
        low = high;
        high = temp;
    }

    cout << "Prime Numbers between: " << low << " & " << high << " are: ";

    for (int i = low + 1; i < high; i++)
    {
        // if i is a prime number, flag will be equal to 1
        flag = check_prime(i);

        if (flag)
        {
            cout << i << " , ";
        }
    }

    return 0;
}