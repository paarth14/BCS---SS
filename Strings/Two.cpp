// Write a Program to Find the Number of Vowels, Consonants,Digits and White Spaces in a String?

// Vowels = a,e,i,o,u
// Consonants = !Vowels
// Digits = 0-9
// Whitespaces = " "

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    cout << "Enter a Sentence: " << endl;
    getline(cin, str);

    int count_vowel = 0;
    int count_consonant = 0;
    int count_digit = 0;
    int count_whitespace = 0;

    for (int i = 0; i < str.size(); i++)
    {
        // if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' ||
        // str[i] = 'I' || str[i] == 'O' || str[i] == 'U')
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
            str[i] == 'U')
        {
            count_vowel++;
        }

        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            count_consonant++;
        }

        if (str[i] >= 0 && str[i] <= 9)
        {
            count_digit++;
        }

        if (str[i] == ' ')
        {
            count_whitespace++;
        }
    }

    cout << "Frequency of Vowel: " << count_vowel << endl;
    cout << "Frequency of Consonant: " << count_consonant << endl;
    cout << "Frequency of Digit: " << count_digit << endl;
    cout << "Frequency of Whitespace: " << count_whitespace << endl;

    return 0;
}