#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Declare
    queue<string> q;

    //Insert elements in Queue
    q.push("abc");
    q.push("bcd");
    q.push("def");
    q.push("xyz");

    while(!q.empty())                   //Checks if Queue is empty
    {
        cout << q.front() << endl;        //q.front() returns the value of the front element inside the queue   
        q.pop();                        //q.pop() removes the front element from the queue
    }
}