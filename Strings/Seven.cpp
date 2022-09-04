// Write a C++ program to check if a given string is a Palindrome or not?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    cout << "Enter a String: " << endl;
    getline(cin, str);

    string new_str = str;
    
    reverse(str.begin(), str.end());

    if (str == new_str)
    {
        cout << "Palindrome!" << endl;
    }

    else
    {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}