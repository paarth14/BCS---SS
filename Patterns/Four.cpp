// Inverted Half pyramid

// * * * * * *
// * * * * *
// * * * *
// * * *
// * *
// *

#include <bits/stdc++.h>
using namespace std;

void inverted_half_pyramid(int n, int m)
{
    int i, j;

    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
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

    cout << "Enter the no. of rows: " << endl;
    cin >> rows;

    cout << "Enter the no. of columns: " << endl;
    cin >> cols;

    inverted_half_pyramid(rows, cols);

    return 0;
}