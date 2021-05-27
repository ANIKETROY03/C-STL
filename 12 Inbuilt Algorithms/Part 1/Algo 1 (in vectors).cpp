#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++)
        cin >> v[i];

    //Minimum Element
    int min = *min_element(v.begin(), v.end());     //min_element returns iterator of minimum element
    cout << min << endl;

    //Maximum Element
    int max = *max_element(v.begin(), v.end());     //max_element returns iterator of maximum element
    cout << max << endl;

    //Sum of Elements
    int sum = accumulate(v.begin(), v.end(), 0);    //accumulate returns the total sum of all elements inside a vector //Take an initial value as third parameter that will be added to the total sum 
    cout << sum << endl;

    //Count of an Element
    int ct = count(v.begin(), v.end(), 6);          //count returns the number of count of an element inside a vector or array //Take a value as third parameter whose count is to be calculated
    cout << ct << endl;

    //Find an Element
    auto it = find(v.begin(), v.end(), 7);     //find returns iterator of the element that is to be found //Take a value as third parameter for what value is to be found
    if(it != v.end())                          //If element is not present find() returns v.end()
        cout << *it << endl;
    else
        cout << "Not Found" << endl;

    //Index of an Element
    auto it2 = find(v.begin(), v.end(), 7);              //Returns the iterator of the element that is to be found
    cout << "Index is : " << it2 - v.begin() << endl;    //Index of that element can be found by subtracting v.begin() from its iterator it

    //Reverse 
    reverse(v.begin(), v.end());                //Reverses an array or string or vector
    for(auto val : v)
        cout << val << " ";
    cout << endl;

    //Reverse in string
    string s = "aniket";
    reverse(s.begin(), s.end());
    cout << s << endl;
}