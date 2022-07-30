// Pascal Triangle

//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1

#include <bits/stdc++.h>
using namespace std;

void pasacal_traingle(int n)
{
    for (int i = 1; i <= n; i++) // For traversing in rows
    {

        int coef = 1;

        for (int k = n - i; k > 0; k--) // For printing spaces
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) // For printing numbers
        {
            cout << coef << " ";
            coef = coef * (i - j) / j;
        }

        cout << endl;
    }
}

int main()
{
    int level;

    cout << "Enter the no. of levels: " << endl;
    cin >> level;

    pasacal_traingle(level);

    return 0;
}
