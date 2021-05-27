#include<bits/stdc++.h>
using namespace std;

void print(map<int, string> &m){
    cout << m.size() << endl;
    //Using auto
    for(auto &pr : m)   //O(nlog(n)) //each iteration takes log(n) time to access element
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{
    //Declare
    map<int, string> m;

    //Insert values in map
    m[1] = "abc";   //O(log(n)) //n is the current size of map
    m[5] = "cdc";
    m[3] = "acd";

    //Using Pairs
    m.insert({4, "afg"});

    print(m);
}