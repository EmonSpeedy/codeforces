#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int res = 0, mx = -1;
    while(n != 0)
    {
        int a,b;
        cin>>a>>b;
        res = res - a;
        res = res + b;
        if(res > mx)
        {
            mx = res;
        }
        n--;
    }
    cout<<mx<<"\n";
    return 0;
}
