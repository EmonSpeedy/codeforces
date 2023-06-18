#include<bits/stdc++.h>
using namespace std;

void Solve()
{
    long long int a,b,n,m,n_r1=0,n_r2=0,n_r3=0,tm=0,pm=0;
    cin>>a>>b>>n>>m;
    long long int cost1 = 0, cost2 = 0, cost3 = 0;
    while(n_r1 < n)
    {
        tm++;
        n_r1++;
        if(tm == m)
        {
            n_r1++;
            tm = 0;
        }
        cost1+=a;
    }
    while(n_r2 < n)
    {
        n_r2++;
    }
    cost2 = n_r2 * b;
    while(n_r3 < n-1)
    {
        pm++;
        n_r3++;
        if(pm == m)
        {
            n_r3++;
            pm = 0;
        }

        cost3+=a;
    }
    cost3+=b;
    int ans = min({cost1,cost2,cost3});
    cout<<ans<<"\n";
    return;
}

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        Solve();
    }

    return 0;
}
