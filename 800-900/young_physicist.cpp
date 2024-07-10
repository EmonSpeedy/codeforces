#include<bits/stdc++.h>
using namespace std;

struct point{
int x;
int y;
int z;
};

bool equilibrium(point ara[],int n)
{
    if(n==1)
    {
        if(ara[0].x==0 && ara[0].y==0 && ara[0].z==0)
            return true;
        return false;
    }

    int res1 = 0, res2 = 0, res3 = 0;
    for(int k=0; k<n; k++)
    {
        res1 += ara[k].x;
    }
    for(int k=0; k<n; k++)
    {
        res2 += ara[k].y;
    }
    for(int k=0; k<n; k++)
    {
        res3 += ara[k].z;
    }
    if(res1==0 && res2==0 && res3==0)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin>>n;
    point ara[n];
    for(int k=0; k<n; k++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        ara[k].x = a;
        ara[k].y = b;
        ara[k].z = c;
    }
    if(equilibrium(ara,n))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
