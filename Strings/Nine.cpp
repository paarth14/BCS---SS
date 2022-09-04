//Write a C++ program to capitalize the first letter of eachword of a given string. Words must be separated by only onespace
// Example:
// Sample Input: cpp string exercises
// Sample Output: Cpp String Exercises

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    cout<<"Enter a String: "<<endl;
    getline(cin, str);

    for(int i=0; i<str.size(); i++)
    {
        if(i == 0)
        {
            str[i] = toupper(str[i]);
        }

        else if(str[i-1] == ' ')
        {
            str[i] = toupper(str[i]);
        }
    }

    cout<<"Updated String: "<<str<<endl;

    return 0;
}