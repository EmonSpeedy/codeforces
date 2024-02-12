#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k;
    cin>>n>>k;
    if(n%2 == 0)
    {
        if(k <= (n/2))
        {
            cout<<k+(k-1);
            return 0;
        }
        else
        {
            int t = n - k;
            cout<<k - t;
            return 0;
        }
    }
    else
    {
        if(k <= (n/2)+1)
        {
            cout<<k+(k-1);
            return 0;
        }
        else
        {
            int t = n - k;
            cout<<k-(t+1);
            return 0;
        }

    }


    return 0;
}
