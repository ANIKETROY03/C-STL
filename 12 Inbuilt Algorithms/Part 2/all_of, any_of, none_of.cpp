#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v_a = {2,3,5};
    vector<int> v_b = {2,3,-5};

    vector<int> v2_a = {2,-3,-5};
    vector<int> v2_b = {-2,-3,-5};

    vector<int> v3_a = {-2,-3,-5};
    vector<int> v3_b = {-2,-3,5};

    //all_of
    //checks condition for all elements
    //Returns True if True for all elements
    //Returns False if atleast False for one element
    cout << all_of(v_a.begin(), v_a.end(), [](int x){return x>0;}) << endl;
    cout << all_of(v_b.begin(), v_b.end(), [](int x){return x>0;}) << endl;

    //any_of
    //checks condition for all elements
    //Returns True if atleast True for one element
    //Returns False if False for all elements
    cout << any_of(v2_a.begin(), v2_a.end(), [](int x){return x>0;}) << endl;
    cout << any_of(v2_b.begin(), v2_b.end(), [](int x){return x>0;}) << endl;

    //none_of
    //checks condition for all elements
    //Returns True if False for all elements
    //Returns False if atleast True for one element
    cout << none_of(v3_a.begin(), v3_a.end(), [](int x){return x>0;}) << endl;
    cout << none_of(v3_b.begin(), v3_b.end(), [](int x){return x>0;}) << endl;
}