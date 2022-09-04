//Write a Program to Concatenate (join) Two Strings entered by user?

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2, str_concat;

    cout<<"Enter First String: "<<endl;
    getline(cin, str1);

    cout<<"Enter Second String: "<<endl;
    getline(cin, str2);

    str_concat = str1 + str2;

    cout<<"Concatenated String: "<<str_concat<<endl;

    return 0;
}