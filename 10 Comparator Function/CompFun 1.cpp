#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];

    for(int i=0; i<n; i++)	     //n^2 Sorting Algorithm
        for(int j=i+1; j<n; j++)
            if(a[i] > a[j])
                swap(a[i], a[j]);   //Swapping elements using swap function

    for(int i=0; i<n; i++)
        cout << a[i] << " ";
}