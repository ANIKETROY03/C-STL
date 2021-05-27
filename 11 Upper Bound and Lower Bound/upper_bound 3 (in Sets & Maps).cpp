#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> s;

    //Maps
    //map<int, int> mp;         //In Maps, lower_bound and upper_bound is applied only on Key

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }

    //auto it = lower_bound(s.begin(), s.end(), 9);   //In sets and maps this method takes O(n) time //It will give TLE for large inputs
    auto it = s.lower_bound(7);     //O(log n)
    auto it2 = s.upper_bound(7);    //O(log n)

    cout << *it << " " << *it2 << endl;
}