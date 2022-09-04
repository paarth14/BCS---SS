//Write a Program to Find the Length of a String entered by user?

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    cout<<"Enter the Sentence: "<<endl;
    getline(cin, str);

    cout<<"The length of String is: "<<str.size()<<endl;

    return 0;
}