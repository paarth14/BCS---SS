// Write a Program that takes the array of five element and theelements of that array are accessed using pointer?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of array: " << endl;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element: " << endl;
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Elements are: " << *(arr + i) << endl;
    }

    return 0;
}