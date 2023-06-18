#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    int cnt = 0;
    while(n != 0)
    {
        int a = n % 10;
        if(a == 4 || a ==7)
        {
            cnt++;
        }
        n = n / 10;
    }
    if(cnt == 7 || cnt == 4)
    {
        cout<<"YES\n";
        return 0;
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}
