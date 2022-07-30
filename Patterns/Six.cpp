// Inverted Full pyramid

// * * * * * *
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *

#include <bits/stdc++.h>
using namespace std;

void inverted_full_pyramid(int n)
{
    for (int i = n; i >= 1; i--) // For traversing in rows
    {
        for (int k = n - i; k > 0; k--) // For printing spaces
        {
            cout << " ";
        }

        for (int j = i; j > 0; j--) // For printing stars
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

    inverted_full_pyramid(level);

    return 0;
}
