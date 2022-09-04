// Write a Program that calculates the standard deviation of 10data using arrays?

#include <bits/stdc++.h>
using namespace std;

int calculate_sd(float data[])
{
    float sum = 0.0, mean, standardDev = 0.0;

    for (int i = 0; i < 10; i++)
    {
        sum += data[i];
    }

    mean = sum / 10;

    for (int i = 0; i < 10; i++)
    {
        standardDev += pow(data[i] - mean, 2);
    }

    return sqrt(standardDev / 10);
}

int main()
{
    float data[10];

    cout << "Enter 10 elements: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter Element: " << endl;
        cin >> data[i];
    }

    cout << "Standard Deviation: " << calculate_sd(data) << endl;

    return 0;
}