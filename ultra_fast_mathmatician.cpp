#include<bits/stdc++.h>
using namespace std;

string output(string s1, string s2)
{
    for(int k=0; s1[k]!='\0'; k++)
    {
        if(s1[k]!= s2[k])
        {
            s1[k]='1';
        }
        else
            s1[k]='0';
    }
    return s1;
}

int main()
{
    string s1, s2;
    cin>>s1>>s2;
    string s_ans = output(s1,s2);
    cout<<s_ans<<"\n";

    return 0;
}

