#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int,int> b){       //***Comparator Function***
    if(a.first != b.first){
        if(a.first > b.first)
            return false;                           //While using inbuilt sort, if you want to swap, return false
        return true;                               //While using inbuilt sort, if you do not want to swap, return true
    }
    else{
        if(a.second < b.second)
            return false;                           //While using inbuilt sort, if you want to swap, return false
        return true;                              //While using inbuilt sort, if you do not want to swap, return true
    }
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i].first >> a[i].second;

    //Sorting using Inbuilt Sort Function in STL
    sort(a.begin(), a.end(), cmp);

    for(int i=0; i<n; i++)
        cout << a[i].first << " " << a[i].second << endl;
}