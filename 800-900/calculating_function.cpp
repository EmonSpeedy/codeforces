#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s;
    if(n % 2 == 0)
    {
        s = n/2;
    }
    else
        s = (-1)*((n/2)+1);
    cout<<s<<"\n";

    return 0;
}

