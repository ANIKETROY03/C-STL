#include<bits/stdc++.h>
using namespace std;

bool should_i_swap(pair<int, int> a, pair<int,int> b){       //***Comparator Function***
    if(a.first != b.first){
        if(a.first > b.first)
            return true;
        return false;
    }
    else{
        if(a.second < b.second)
            return true;
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i].first >> a[i].second;

    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(should_i_swap(a[i], a[j]))   //***Comparator Function***
                swap(a[i], a[j]);   //Swapping elements using swap function

    for(int i=0; i<n; i++)
        cout << a[i].first << " " << a[i].second << endl;
}