#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int res = 0;
    for(int k=0; k<s.size()-1; k++)
    {
        if(s[k]==s[k+1])
        {
            res++;
        }
    }
    cout<<res<<"\n";

    return 0;
}
