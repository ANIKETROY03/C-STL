#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {2,3,5,6,7};
    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";

    cout << endl;

    vector<int> :: iterator it; 	//Declaring iterator it for vector<int>
    it = v.begin(); 			//Initialising the iterator with the first location of the vector

    cout << *it << endl;        //2
    cout << *(it+1) << endl;    //3
     
    return 0; 
}