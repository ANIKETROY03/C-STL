#include<bits/stdc++.h>
using namespace std;

int main()
{

    pair<int, string> p;
    //p = make_pair(2, "abc");

    p = {2, "abcd"};
    pair<int, string> &p1 = p;
    p1.first = 100;
    cout << p.first << " " << p.second << endl;
 
    pair<int, int> p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4}; 		//{{1,2},{2,3},{3,4}};

    swap(p_array[0], p_array[2]);

    for(int i=0; i<3; i++)
        cout << p_array[i].first << " " << p_array[i].second << endl;

    return 0;
}