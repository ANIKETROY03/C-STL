/*
Given N strings and Q queries.
In each query you are given a string
print yes if string is present
else print no

N <= 10^6
|S| <= 100
Q <= 10^6
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string> s;
    int n;
    cin >> n;
    while(n--)
    {
        string str;
        cin >> str;
        s.insert(str);
    }
    int q;
    cin >> q;
    while(q--)
    {
        string str;
        cin >> str;

        if(s.find(str) == s.end())
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}