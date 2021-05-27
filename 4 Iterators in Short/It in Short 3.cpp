#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,5};

    //Range based loops
    for(int value : v)
        cout << value << " ";
    cout << endl;

    vector<pair<int, int>> vp;
    vp = {{1,2},{2,3},{3,4}};

    for(pair<int, int> &value : vp)
        cout << value.first << " " << value.second << endl; 

    return 0;
}