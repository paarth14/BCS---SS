// Write a Program to Swap Two Numbers?

#include <bits/stdc++.h>
using namespace std;

// Method 1 : Using 3rd Variable.

// int main()
// {
//     int num1, num2;

//     cout << "Enter First Number: " << endl;
//     cin >> num1;

//     cout << "Enter Second Number: " << endl;
//     cin >> num2;

//     cout << "Before Swapping: " << endl;

//     cout << "First Number: " << num1 << endl;
//     cout << "Second Number: " << num2 << endl;

//     int temp = num1;
//     num1 = num2;
//     num2 = temp;

//     cout << "After Swapping: " << endl;

//     cout << "First Number: " << num1 << endl;
//     cout << "Second Number: " << num2 << endl;

//     return 0;
// }

// Method 2 : Without Using 3rd Variable.

int main()
{
    int num1, num2;

    cout << "Enter First Number: " << endl;
    cin >> num1;

    cout << "Enter Second Number: " << endl;
    cin >> num2;

    cout << "Before Swapping: " << endl;

    cout << "First Number: " << num1 << endl;
    cout << "Second Number: " << num2 << endl;

    num2 = num1 + num2;
    num1 = num2 - num1;
    num2 = num2 - num1;

    cout << "After Swapping: " << endl;

    cout << "First Number: " << num1 << endl;
    cout << "Second Number: " << num2 << endl;

    return 0;
}