// Write a Program to Display Prime Numbers BetweenTwo Intervals (entered by user)
// Example:
// Enter two numbers: 0 20
// Prime numbers between 0 and 20 are:
// 2 3 5 7 11 13 17 19

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int low, high;

    cout << "Enter Low: " << endl;
    cin >> low;

    cout << "Enter High: " << endl;
    cin >> high;

    bool flag;

    if (low > high)
    {
        int temp = low;
        low = high;
        high = temp;
    }

    cout << "Prime numbers between: " << low << " & " << high << " are: " << endl;

    while (low < high)
    {
        flag = true;

        if (low == 0 || low == 1)
        {
            flag = false;
        }

        else
        {
            for (int i = 2; i <= sqrt(low); i++)
            {
                if (low % i == 0)
                {
                    flag = false;
                    break;
                }
            }
        }

        if (flag)
        {
            cout << low << " , ";
        }

        // ++low;
        low++;
    }

    return 0;
}