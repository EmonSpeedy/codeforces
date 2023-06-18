#include<bits/stdc++.h>
using namespace std;

void make_upper(string s)
{
    for(int k=0; k<s.size(); k++)
    {
        if(s[k] >= 'a' && s[k]<= 'z')
        {
            s[k] = s[k] - 32;
        }
    }
    cout<<s<<"\n";
}
void make_lower(string s)
{
    for(int k=0; k<s.size(); k++)
    {
        if(s[k] >= 'A' && s[k]<= 'Z')
        {
            s[k] = s[k] + 32;
        }
    }
    cout<<s<<"\n";
}

int main()
{
    string s;
    cin>>s;
    if(s.size() == 1)
    {
        cout<<s;
        return 0;
    }
    int uc = 0, lc = 0;
    for(int k=0; k<s.size(); k++)
    {
        if(s[k] >= 'A' && s[k] <= 'Z')
            uc++;
        else
            lc++;
    }
    if(uc > lc)
        make_upper(s);
    else
        make_lower(s);
    return 0;
}
