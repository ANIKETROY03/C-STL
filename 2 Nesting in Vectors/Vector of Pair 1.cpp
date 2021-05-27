#include<bits/stdc++.h>
using namespace std;

void printVect(vector<pair<int, int>> &v)
{
    for(int i=0; i<v.size(); i++)
        cout << v[i].first << " " << v[i].second << endl;
    cout << endl;
}

int main()
{

    vector<pair<int, int>> vp;
    vp = {{1,2},{2,3},{3,4}};
    printVect(vp);

    vector<pair<int, int>> vp2;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x,y;
        cin >> x >> y;
        //vp2.push_back({x,y});
        vp2.push_back(make_pair(x,y));
    }
    printVect(vp2);

    return 0; 
}