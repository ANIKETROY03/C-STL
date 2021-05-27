#include<bits/stdc++.h>
using namespace std;

void printVect(vector<int> v)
{
    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
}

int main()
{

    vector<int> v(5,6);
    v.push_back(10);

    printVect(v);

    return 0;
}