#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<pair<string, string>, vector<int>> m;

    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        string fn, ln;              //Input for the pair
        int ct;
        cin >> fn >> ln >> ct;
		
		vector<int> temp;			//Using an empty vector
		for(int j=0; j<ct; j++)
		{
			int x;
			cin >> x;
			temp.push_back(x);
		}
		
		//m.insert({{fn,ln}, temp});		//First Option
		m[{fn,ln}] = temp;			//Second Option
    }

    for(auto &pr : m)
    {
        auto &full_name = pr.first;
        auto &list = pr.second;
        cout << full_name.first << " " << full_name.second << endl;
        cout << list.size() << endl;
        for(auto &element : list)
            cout << element << " ";
        cout << endl;
    }
}