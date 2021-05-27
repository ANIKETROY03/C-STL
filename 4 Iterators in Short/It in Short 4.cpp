#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,5};

    //auto keyword 
    //Dynamically determines the data type of anything

    for(auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;

    for(auto &value : v)
        cout << value << " ";
    cout << endl;

    vector<pair<int, int>> vp = {{1,2},{2,3},{3,4}};

    for(auto &value : vp)
        cout << value.first << " " << value.second << endl;

    return 0;
}