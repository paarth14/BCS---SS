//Write a C++ program to find the largest word in a given String.
// Example:
// Sample Input: C++ is a general-purpose programming language.
// Sample Output: programming

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    cout<<"Enter a String: "<<endl;
    getline(cin, str);

    string word;

    stringstream iss(str);

    string smallest, largest;

    int flag=0;

    while(iss >> word)
    {
        if(flag == 0)
        {
            smallest = word;
            largest = word;
            flag = 1;
        }

        else
        {
            if(smallest.length() > word.length())
            {
                smallest = word;
            }

            else if(word.length() > largest.length())
            {
                largest = word;
            }
        }
    }

    cout<<"Smallest Word: "<<smallest<<endl;
    cout<<"Largest Word: "<<largest<<endl;

    return 0;
}