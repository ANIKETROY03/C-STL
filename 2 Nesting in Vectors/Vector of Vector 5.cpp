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

    int row, col;
    cin >> row >> col;

    for(int i=0; i<row; i++)
    {
        v.push_back(vector<int> ()); //First inserting an empty vector to make v[i] exists

        for(int j=0; j<col; j++)
        {
            int x; cin >> x;
            v[i].push_back(x); //Inserting the elements in the v[i]th vector
        }
    }

    for(int i=0; i<row; i++) //Printing the 2D matrix as usual
    {
        for(int j=0; j<col; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0; 
}