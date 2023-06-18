#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    stack<char> st;
    for(int k =0; k<s.size(); k++)
    {
        if(s[k] == '(' || s[k] == '{' || s[k] == '[')
            st.push(s[k]);
        else
        {
            if(st.empty())
            {
                cout<<"No\n";
            }
            if(s[k]==')' && st.top()=='(')
            {
                st.pop();
            }
            else if(s[k] == '}' && st.top() == '{')
            {
                st.pop();
            }
            else if(s[k] == ']' && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                cout<<"No\n";
                return 0;
            }
        }

    }
    if(st.size() == 0)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}


