#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string> s;

    s.insert("abc");		// O(1)
    s.insert("def");
    s.insert("jkl");

    for(auto value : s)
        cout << value << endl;
}