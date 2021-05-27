#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Lambda Function
    cout << [](int x){return x+2;}(10) << endl;
    cout << [](int x, int y){return x+y;}(5,6) << endl;

    //Assigning a Lambda Function to a variable
    auto sum = [](int x, int y){return x+y;};
    cout << sum(2,3);
}