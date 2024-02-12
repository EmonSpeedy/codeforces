#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int k=0; k<n; k++)
    {
        cin>>ara[k];
    }
    if(n == 1)
    {
        cout<<1;
        return 0;
    }
    int flag = 1;
    for(int k=0; k<n-1;k++)
    {
        if(ara[k] != ara[k+1])
        {
            flag++;
        }
    }
    cout<<flag<<"\n";

    return 0;
}
