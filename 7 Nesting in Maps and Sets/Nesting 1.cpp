#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<pair<string, string>, vector<int>> m;

    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        string fn, ln;              //Input for the pair
        int ct;
        cin >> fn >> ln >> ct;

        for(int j=0; j<ct; j++)
        {
            int x;                  //Input for the vector elements
            cin >> x;
            //Inserting key and value into the map
            m[{fn,ln}].push_back(x);        //On inserting m[{fn,ln}] into the map creates a vector
        }
    }

    for(auto &pr : m)
    {
        auto &full_name = pr.first;         //pr.first is the pair in the map
        auto &list = pr.second;             //pr.second is the vector in the map
        cout << full_name.first << " " << full_name.second << endl;
        cout << list.size() << endl;
        for(auto &element : list)
            cout << element << " ";
        cout << endl;
    }
}