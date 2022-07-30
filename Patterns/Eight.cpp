// Half pyramid using numbers

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

#include <bits/stdc++.h>
using namespace std;

void half_pyramid(int n, int m)
{
    int i, j;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j
                 << " ";
        }

        cout << endl;
    }
}

int main()
{
    int rows, cols;

    cout << "Enter the no. of rows: " << endl;
    cin >> rows;

    cout << "Enter the no. of colummns: " << endl;
    cin >> cols;

    half_pyramid(rows, cols);
}