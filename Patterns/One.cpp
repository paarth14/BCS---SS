// Solid Rectangular star:
//  * * * * *
//  * * * * *
//  * * * * *

#include <bits/stdc++.h>
using namespace std;

void complete_rectangle(int n, int m)
{
    int i, j;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << "*"
                 << " ";
        }

        cout << endl;
    }
}

int main()
{
    int rows, cols;

    cout << "Enter no. of rows: " << endl;
    cin >> rows;

    cout << "Enter no. of columns: " << endl;
    cin >> cols;

    complete_rectangle(rows, cols);

    return 0;
}