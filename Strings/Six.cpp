//Write a C++ program to change every letter in a given stringwith the letter following it in the alphabet (ie. a becomes b, pbecomes q, z becomes a).
// Example:
// Sample Input: Abcdef3
// Sample Output: Bcdefg3

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    cout<<"Enter the String: "<<endl;
    getline(cin, str);

    for(int i=0; i<str.size(); i++)
    {
        int ascii_val = (int)str[i];

        if(ascii_val == 90) //'Z'
        {
            str[i] = char(65); //'A'
        }

        else if(ascii_val == 122) //'z'
        {
            str[i] = char(97); //'a'
        }

        else if((ascii_val >= 65 && ascii_val < 90) || (ascii_val >= 97 && ascii_val < 122)) 
        {
            str[i] = char(str[i] + 1);
        }
    }

    cout<<"Updated String: "<<str<<endl;

    return 0;
}