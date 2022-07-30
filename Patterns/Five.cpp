// Full Pyramid Star Pattern

//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
// * * * * * *

#include <bits/stdc++.h>
using namespace std;

void full_pyramid(int n)
{
    for (int i = 1; i <= n; i++) // For traversing in rows
    {
        for (int k = n - i; k > 0; k--) // For printing spaces
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) // For printing stars
        {
            cout << "* ";
        }

        cout << endl;
    }
}

int main()
{
    int level;

    cout << "Enter the no. of levels: " << endl;
    cin >> level;

    full_pyramid(level);

    return 0;
}
