/*
The Monk and Class Marks
https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, multiset<string>> marks_map;

    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int marks;
        string name;
        cin >> name >> marks;
        marks_map[marks].insert(name);
    }

    //Reverse iterator the map
    auto cur_it = marks_map.end();
    cur_it--;

    while(true)
    {
        auto &students = (*cur_it).second;
        int marks = (*cur_it).first;

        for(auto student : students)
            cout << student << " " << marks << endl;

        //Terminate the loop
        if(cur_it == marks_map.begin())
            break;
        else
            cur_it--;
    }
}