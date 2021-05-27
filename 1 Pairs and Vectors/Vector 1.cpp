#include<bits/stdc++.h>
using namespace std;

void printVect(vector<int> v)
{
    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
}

int main()
{

    vector<int> v;

    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x); //O(1)
    }

    printVect(v);

    return 0;
}