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
    int sum = 0;
    for(int k=0; k<n; k++)
    {
        sum += ara[k];
    }
    double res = sum/(double)n;
    cout<<res<<"\n";

    return 0;
}


