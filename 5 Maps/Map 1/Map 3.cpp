#include<bits/stdc++.h>
using namespace std;

void print(map<int, string> &m){
    cout << m.size() << endl;
    //Using auto
    for(auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{
    map<int, string> m;

    m[1] = "abc";
    m[5] = "fgh"; 
    m[3] = "acd";
    m[2] = "bcf";

    //Functions

    //find()
    auto it = m.find(3);                // O(log(n))
    if(it == m.end())                   //If no such value exits in map it returns end()	//To handle segmentation fault
        cout << "No Value" << endl;
    else
        cout << (*it).first << " " << (*it).second << endl;

    //erase()

    //erase() using key value
    m.erase(3);                         //O(log(n))
    print(m);

    //erase() using iterator
    auto it2 = m.find(5);
    if(it2 != m.end())                  //To handle segmentation fault
        m.erase(it2);
    print(m);

    //clear()
    m.clear();                          //Clears the entire map
    print(m);

}