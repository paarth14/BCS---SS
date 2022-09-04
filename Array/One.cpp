// Write a Program that takes N elements (max. value of N is 100 and N is the float number specified by user) from user, stores datain an array and Calculates the average of those numbers?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    float arr[n], sum = 0.0, average;

    cout << "Enter the size of array: " << endl;
    cin >> n;

    while (n <= 0 || n > 100)
    {
        cout << "Error! Numbers should be in the range of 0 to 100" << endl;
        cout << "Enter the number again: " << endl;
        cin >> n;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element: " << endl;
        cin >> arr[i];
        sum += arr[i];
    }

    average = sum / n;

    cout << "Average is: " << average << endl;

    return 0;
}