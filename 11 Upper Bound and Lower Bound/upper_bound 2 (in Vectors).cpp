#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    for(int i=0; i<n; i++)
        cout << a[i] << " ";
    cout << endl;

    auto it = upper_bound(a.begin(), a.end(), 25);

    if(it == a.end()){           //If element is not present it return the location of nth element ie (a+n)
        cout << "Not Found";
        return 0;
    }
    cout << *it << endl;
}