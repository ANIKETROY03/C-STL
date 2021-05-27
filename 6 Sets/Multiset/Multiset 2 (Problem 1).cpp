/*
Monk and the Magical Candy Bags
https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;

        multiset<long long> s;

        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        long long total = 0;

        while(k--)
        {
            auto last_it = s.end();
            last_it--;

            int candy = *last_it;
            total = total + candy;
            s.erase(last_it);
            s.insert(candy / 2);
        }
        cout << total << endl;
    }
}