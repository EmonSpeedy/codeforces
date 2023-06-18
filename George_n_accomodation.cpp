#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int flag = 0;
    for(int k=0; k<n; k++)
    {
        int a,b;
        cin>>a>>b;
        if((b-a)>=2)
        {
            flag++;
        }
    }
    cout<<flag<<"\n";
    return 0;
}

