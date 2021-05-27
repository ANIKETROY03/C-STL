#include<bits/stdc++.h>
using namespace std;

void printVect(vector<int> &v)
{
    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}

int main()
{

    vector<vector<int>> v;

    int N;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        int n;
        cin >> n;
        v.push_back(vector<int> ()); // It's inserting an empty vector in the ith Vector every iteration //v[i] exists now
        for(int j=0; j<n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);  //Since v[i] now exits we can push elements using v[i]
        }
    }

    for(int i=0; i<v.size(); i++)
        printVect(v[i]);

    return 0; 
}