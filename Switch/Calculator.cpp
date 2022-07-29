// Write a Program to Make a Simple Calculator to Add, Subtract,Multiply or Divide Using Switch case
// The program should takes an arithmetic operator (+, -, *, /) and two operands from a user and performs
// the operation on those two operands depending upon the operator entered by the user.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2, choice;

    cout << "*** Welcome to my Calculator ***" << endl;

    cout << "Enter First Number: " << endl;
    cin >> num1;

    cout << "Enter Second Number: " << endl;
    cin >> num2;

    do
    {

        cout << "Enter the Arithmetic Operation of your choice: " << endl;
        cout << "Press 1 --> Addition" << endl;
        cout << "Press 2 --> Subtraction" << endl;
        cout << "Press 3 --> Multiplication" << endl;
        cout << "Press 4 --> Division" << endl;
        cout << "Press 5 --> HCF" << endl;
        cout << "Press 6 --> LCM" << endl;
        cout << "Press 7 --> Exit" << endl;

        cout << "Enter your choice: " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Addition: " << num1 + num2 << endl;
            break;

        case 2:
            cout << "Subtraction: " << num1 - num2 << endl;
            break;

        case 3:
            cout << "Multiplication: " << num1 * num2 << endl;
            break;

        case 4:
            cout << "Division: " << num1 / num2 << endl;
            break;

        case 5:
            cout << "HCF: " << __gcd(num1, num2) << endl;
            break;

        case 6:
            cout << "LCM: " << ((num1 * num2) / __gcd(num1, num2)) << endl;
            break;

        case 7:
            cout << "Thank You!" << endl;
            break;

        default:
            cout << "Invalid Input!" << endl;
            break;
        }

    } while (choice != 7);

    return 0;
}