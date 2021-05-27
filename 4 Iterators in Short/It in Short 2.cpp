#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,5};

    //Range based loops
    for(int value : v)
        cout << value << " ";
    cout << endl;

    //Copy and References

    //Copy 
    //This creates the copy of the elements inside the vector hence any change to it will not reflect in the original container
    for(int value : v){
        value++;
    }
    for(int value : v){
        cout << value << " ";
    }
    cout << endl;

    //Reference
    //This send the elements using reference hence any change inside the vector will reflect in the original vector
    for(int &value : v){
        value++;
    }
    for(int value : v){
        cout << value << " ";
    }
    cout << endl;

    return 0;
}