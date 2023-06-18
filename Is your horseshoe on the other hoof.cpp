#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[4];
    for(int k=0; k<4; k++)
    {
        cin>>a[k];
    }
    sort(a, a+4);
    int flag = 0;
    for(int k=0; k<3; k++)
    {
        if(a[k] == a[k+1])
        {
            flag++;
        }
    }
    cout<<flag<<'\n';
    return 0;
}

