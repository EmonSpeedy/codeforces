#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    if(s.size()<=6){
        cout<<"NO\n";
        return 0;
    }
    int l = 1,r = 1;
    for(int k=0; k<s.size()-1; k++)
    {
        if(s[k]==s[k+1])
        {
            r++;
        }
        else
        {
            int mx = max(l,r);
            l = mx;
            r =1;
            if(l >= 7)
            {
                cout<<"YES\n";
                return 0;
            }
        }
    }
    if(r >= 7)
    {
        cout<<"YES\n";
        return 0;
    }
    cout<<"NO\n";
    return 0;
}
