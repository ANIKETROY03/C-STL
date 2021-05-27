#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n];

    for(int i=0; i<n; i++)
        cin >> v[i];

    //Minimum Element
    int min = *min_element(v, v+n);     //min_element returns pointer of minimum element
    cout << min << endl;

    //Maximum Element
    int max = *max_element(v, v+n);     //max_element returns pointer of maximum element
    cout << max << endl;

    //Sum of Elements
    int sum = accumulate(v, v+n, 0);    //accumulate returns the total sum of all elements inside array //Take an initial value as third parameter that will be added to the total sum 
    cout << sum << endl;

    //Count of an Element
    int ct = count(v, v+n, 6);          //count returns the number of count of an element inside a vector or array //Take a value as third parameter whose count is to be calculated
    cout << ct << endl;

    //Find an Element
    auto it = find(v, v+n, 7);          //find returns pointer of the element that is to be found //Take a value as third parameter for what value is to be found
    if(it != v+n)                       //If element is not present find() returns v+n
        cout << *it << endl;
    else
        cout << "Not Found" << endl;

    //Index of an Element
    auto it2 = find(v, v+n, 7);                            //Returns the pointer of the element that is to be found
    cout << "Index is : " << it2 - v << endl;             //Index of that element can be found by subtracting v from its pointer it

    //Reverse 
    reverse(v, v+n);                //Reverses an array or string or vector
    for(auto val : v)
        cout << val << " ";
    cout << endl;

}