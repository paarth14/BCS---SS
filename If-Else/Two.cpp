// Write a Program to Check Whether a Character isVowel or Consonant.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;

    bool isLowerCase;
    bool isUpperCase;

    cout << "Enter an character: " << endl;
    cin >> c;

    isLowerCase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUpperCase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (!isalpha(c))
    {
        cout << "Enter an alphabet" << endl;
    }

    else if (isLowerCase || isUpperCase)
    {
        cout << c << " is an Vowel" << endl;
    }

    else
    {
        cout << c << " is an Consonant" << endl;
    }

    return 0;
}