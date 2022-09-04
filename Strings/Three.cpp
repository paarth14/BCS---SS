//Write a Program to Remove all Characters in a String Except Alphabets.
// Example:
// Enter a string: p2'r"o@gram84iz./
// Output String: programiz

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    cout<<"Enter a Sentence: "<<endl;
    getline(cin, str);

    string new_str = "";

    for(int i=0; i<str.size(); i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            // str[i] = new_str[i];
            new_str += str[i];
        }
    }

    str = new_str;

    cout<<"Updated String: "<<str<<endl;

    return 0;
}