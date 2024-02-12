#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin>>s1>>s2;
    if(s1.size() != s2.size())
    {
        cout<<"NO\n";
        return 0;
    }
    for(int k=0, l=s2.size()-1 ; k<s1.size(); k++, l--)
    {
        if(s1[k] == s2[l])
        {
            continue;
        }
        else
        {
            cout<<"NO\n";
            return 0;
        }

    }
    cout<<"YES\n";
    return 0;
}

