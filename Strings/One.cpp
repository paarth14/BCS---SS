//Write a Program to Find the Frequency of given Character by user in a String?

#include<bits/stdc++.h>
using namespace std;

int main()
{
    

    string str;

    cout<<"Enter a Sentence: "<<endl;
    getline(cin, str);

    char check_char;
    
    cout<<"Enter the character: "<<endl;
    cin>>check_char;

    int count=0;

    for(int i=0; i<str.size(); i++)
    {
        if(str[i] == check_char)
        {
            count++;
        }
    }

    cout<<"Frequency of "<<check_char<<": "<<count<<endl;

    return 0;
}