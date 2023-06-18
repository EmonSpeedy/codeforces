#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int k=0; k<n; k++)
    {
        cin>>a[k];
    }
    for(int k=0; k<n; k++)
    {
        if(a[k] == 1)
        {
            cout<<"Hard\n";
            return 0;
        }
    }
    cout<<"Easy\n";
    return 0;
}
