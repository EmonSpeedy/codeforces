#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int k=0; k<n; k++)
    {
        cin>>a[k];
    }
    int tmp[n];
    for(int k=0; k<n; k++)
    {
        tmp[k] = a[k];
    }
    sort(tmp,tmp+n);
    for(int k=0; k<n; k++)
    {
        int v = tmp[k];
        for(int l=0; l<n; l++)
        {
            if(a[l] == v)
            {
                tmp[k] = l+1;
                break;
            }
        }
    }
    for(int k=0; k<n; k++)
    {
        cout<<tmp[k]<<" ";
    }

    return 0;
}
