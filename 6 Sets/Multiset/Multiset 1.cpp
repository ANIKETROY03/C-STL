#include<bits/stdc++.h>
using namespace std;

void print(multiset<string> &s)
{
    for(auto value : s)
        cout << value << endl;
    cout << "-------" << endl;
}

int main()
{
    //Declare
    multiset<string> s;

    //Insert
    s.insert("abc");        // O(log(n))
    s.insert("xyz");
    s.insert("def");
    s.insert("def");        // inserting multiple value

    auto it = s.find("def");    // O(log(n))
    if(it != s.end())
        s.erase(it);            //Using iterator will only remove the very first duplicate element in the miltiset

    // s.erase("def");             //This will remove all the corresponding duplicate elements in the multiset

    print(s);
}