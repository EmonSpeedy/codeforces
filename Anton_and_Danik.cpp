#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a =0, d = 0;
    for(int k=0; k<s.size(); k++)
    {
        if(s[k] == 'A')
            a++;
        else
            d++;
    }
    if(a>d)
    {
        cout<<"Anton\n";
        return 0;
    }
    else if(a == d)
    {
        cout<<"Friendship\n";
        return 0;
    }
    else
        cout<<"Danik\n";

    return 0;
}

