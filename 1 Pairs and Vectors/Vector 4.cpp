#include<bits/stdc++.h>
using namespace std;

void printVect(vector<int> v)
{
    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}

int main()
{

    vector<int> v(5,1);

    printVect(v);

    vector<int> v2 = v;
    printVect(v2);

    return 0; 
}