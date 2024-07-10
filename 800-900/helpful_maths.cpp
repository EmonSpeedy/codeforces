#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s.size()==1)
    {
        cout<<s;
        return 0;
    }
    int sz;
    if(s.size()/2==0)
    {
        sz = s.size()/2;
    }
    else
        sz = (s.size()/2)+1;
    int a[sz];
    int i = 0;
    for(int k=0; k<s.size(); k+=2)
    {
        a[i] = s[k]-'0';
        i++;
    }
    sort(a, a+sz);
    i=0;
    for(int k=0; k<s.size(); k+=2)
    {
        s[k] = a[i]+'0';
        i++;
    }
    cout<<s;

    return 0;
}
