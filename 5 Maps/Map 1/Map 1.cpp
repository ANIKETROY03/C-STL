#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Declare
    map<int, string> m;

    //Insert values in map
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";

    //Using Pairs
    m.insert({4, "afg"});
    m.insert(make_pair(6, "xyz"));

    //To print the map

    //Using the long iterator syntax
    map<int, string> :: iterator it;
    for(it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    //Using auto
    for(auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}