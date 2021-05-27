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
        vector<int> temp; //temporary vector to store the values
        for(int j=0; j<n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x); //Inserting values in the temporary vector //takes value of a row
        }
        v.push_back(temp); //Now pushing that complete temp vector in the ith vector 
    }

    for(int i=0; i<v.size(); i++)
        printVect(v[i]);

    return 0; 
}