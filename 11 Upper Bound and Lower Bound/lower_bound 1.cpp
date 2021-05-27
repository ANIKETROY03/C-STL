#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];

    sort(a, a+n);

    for(int i=0; i<n; i++)
        cout << a[i] << " ";
    cout << endl;

    int *ptr = lower_bound(a, a+n, 6);

    if(ptr == (a+n)){           //If element is not present it return the location of nth element ie (a+n)
        cout << "Not Found";
        return 0;
    }
    cout << *ptr << endl;
}