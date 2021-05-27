#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s)
{
    for(auto value : s)
        cout << value << endl;

    //for(auto it = s.begin(); it != s.end(); ++it)
    //    cout << (*it) << endl;
    cout << "--------" << endl;
}

int main()
{
    //Declare 
    set<string> s;

    //Insert
    s.insert("abc");            //log(n)
    s.insert("zsdf");
    s.insert("bcd");

    print(s);

    //Access
    auto it = s.find("abc");    //log(n)
    if(it != s.end())           //To handle segmentation fault
        cout << (*it) << endl;

    //Erase
    auto it2 = s.find("bcd");
    if(it2 != s.end())           
        s.erase(it2);
    //s.erase("bcd");

    print(s);
}