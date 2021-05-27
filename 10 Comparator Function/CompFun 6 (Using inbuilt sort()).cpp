#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int,int> b){       //***Comparator Function***
    if(a.first != b.first){
        return a.first < b.first;                   //By returning exactly in what order we want, we reduce the lines of code for defining the case for true and false
    }
    return a.second > b.second;                     //By returning exactly in what order we want, we reduce the lines of code for defining the case for true and false
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