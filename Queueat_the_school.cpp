#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t != 0)
    {
        for(int k = 0; k<s.size(); k++)
        {
            if(s[k]=='B' && s[k+1]=='G')
            {
                swap(s[k],s[k+1]);
                k++;
            }
        }
        t--;
    }
    cout<<s;
    return 0;
}

