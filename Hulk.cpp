#include<bits/stdc++.h>
using namespace std;
void solve()
{
    cout<<"I hate it\n";
    return;
}
bool Is_odd(int n)
{
    if(n % 2 != 0)
        return true;
    return false;
}
void solve_a(int n)
{
    string s1,s2;
    s1 = "I hate that ";
    s2 = "I love that ";
    for(int k=0; k<n/2; k++)
    {
        cout<<s1+s2;
    }
    cout<<"I hate it\n";
    return;
}
void solve_b(int n)
{
    string s1,s2;
    s1 = "I hate that ";
    s2 = "I love that ";
    for(int k=0; k<n/2-1; k++)
    {
        cout<<s1+s2;
    }
    cout<<"I hate that I love it\n";
    return;
}

int main()
{
    int n;
    cin>>n;
    if(n == 1)
    {
        solve();
    }
    else if(n > 1)
    {
        bool dec;
        dec = Is_odd(n);
        if(dec)
        {
            //if odd
            solve_a(n);
        }
        else
        {
            //if even
            solve_b(n);
        }

    }

    return 0;
}
