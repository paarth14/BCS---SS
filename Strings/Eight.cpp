//Write a C++ program to count all the words in a given string. Words must be separated by only one space
// Example:
// Sample Input: Siddharth Singh
// Sample Output: number of words -> 2

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    cout<<"Enter a String: "<<endl;
    getline(cin, str);

    int count=0;

    for(int i=0; i<str.size(); i++)
    {
        if(str[i] == ' ')
        {
            count++;
        }
    }

    cout<<"Count of words are: "<<count+1<<endl;

    return 0;

}