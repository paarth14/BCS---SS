// Write a Program that takes n element from user and displaysthe largest element of an array?

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

    int max_element = INT_MIN;
    int min_element = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        max_element = max(max_element, arr[i]);
        min_element = min(min_element, arr[i]);
    }

    cout << "Maximum Element: " << max_element << endl;
    cout << "Minimum Element: " << min_element << endl;

    return 0;
}