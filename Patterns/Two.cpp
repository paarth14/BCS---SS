// Hollow Rectangular star
// * * * * *
// *       *
// * * * * *

#include <bits/stdc++.h>
using namespace std;

void hollow_rectangle(int n, int m)
{
    int i, j;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 || i == n || j == 1 || j == m)
            {
                cout << "*"
                     << " ";
            }

            else
            {
                cout << " "
                     << " ";
            }
        }

        cout << endl;
    }
}

int main()
{
    int rows, cols;

    cout << "Enter the no. of rows: " << endl;
    cin >> rows;

    cout << "Enter the no. of cols: " << endl;
    cin >> cols;

    hollow_rectangle(rows, cols);

    return 0;
}