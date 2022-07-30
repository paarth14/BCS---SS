// Hollow Full Pyramid Star

//      *
//     * *
//    *   *
//   *     *
//  *       *
// * * * * * *

#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 11; j++)
        {
            if (i + j == 7 || j - i == 5 || i == 6)
            {
                cout << "*";
            }

            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
