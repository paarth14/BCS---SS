// Write a Program that adds two matrices using Multi-dimensional Arrays where the number of rows r and columns c isentered by user (Value of r and c < 100)?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c, a[100][100], b[100][100], sum[100][100];

    cout << "Enter the no. of Rows: " << endl;
    cin >> r;

    cout << "Enter the no. of Columns: " << endl;
    cin >> c;

    // Storing Elements of 1st Matrix.
    cout << "Enter the elements of first matrix: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter element a" << i + 1 << j + 1 << ":";
            cin >> a[i][j];
        }
    }

    // Storing Elements of 2nd Matrix
    cout << "Enter the elements of second matrix: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter element b" << i + 1 << j + 1 << ":";
            cin >> b[i][j];
        }
    }

    // Adding two matrices
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Displaying the resultant matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << sum[i][j] << " ";
            if (j == c - 1)
            {
                cout << endl;
            }
        }
    }

    return 0;
}