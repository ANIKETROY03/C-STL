#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Declare
    stack<int> s;

    //Insert elements in stack
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    while(!s.empty())                   //Checks if stack is empty
    {
        cout << s.top() << endl;        //s.top() returns the value of the top element inside the stack   
        s.pop();                        //s.pop() removes the top element from the stack
    }
}