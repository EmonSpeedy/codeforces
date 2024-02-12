/*
	In the name of Allah
    author : md sh emon
*/
#include "bits/stdc++.h"
using namespace std;
#define ll long long
int main(){
    int q; cin>>q;
    while(q--)
    {
    	ll n; cin>>n;
    	ll cnt2 = 0, cnt3 = 0, cnt5 = 0;
    	while(n % 2 ==0)
    	{
    		n /= 2;
    		cnt2++;
    	}
    	while(n % 3 ==0)
    	{
    		n /= 3;
    		cnt3++;
    	}
    	while(n % 5 ==0)
    	{
    		n /= 5;
    		cnt5++;
    	}
    	if(n != 1){
    		cout << -1 << "\n";
    	}else{
    		ll ans = cnt2 + (cnt3*2) + (cnt5*3);
    		cout << ans << "\n";	
    	}
    }
    return 0;
}