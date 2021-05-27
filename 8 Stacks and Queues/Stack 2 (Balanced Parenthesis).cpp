#include<bits/stdc++.h>
using namespace std;

unordered_map<char, int> symbols = {{'[',-1}, {'(',-2}, {'{',-3}, {']',1}, {')',2}, {'}',3}};

string isBalanced(string s)
{
    stack<char> st;

    for(char bracket : s)
    {
        if(symbols[bracket] < 0)            //If it is an opening bracket
        {
            st.push(bracket);
        }
        else
        {
            if(st.empty())                  //If a closing bracket is encountered but the stack is empty (ie No opening bracket is present for that closing bracket)
                return "NO";                //Not Balanced

            char top = st.top();            //Accessing the top element of the stack 
            st.pop();                       //After accessing pop out the top element //It will be checked later for matching

            if(symbols[bracket] + symbols[top] != 0)            //If the type of opening bracket is not same as the type of closing bracket //Used unordered_map for it
                return "NO";
        }
    }

    if(st.empty())                      //After traversing the complete string if the stack is empty then the parenthesis is balanced
        return "YES";
    else
        return "NO";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << isBalanced(s) << endl;
    }
}