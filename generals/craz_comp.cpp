/*
	In the name of Allah
    author : md sh emon
*/
#include "bits/stdc++.h"
using namespace std;
#define 	ll 			long long
#define 	pb 			push_back
#define 	all(x) 		x.begin(),x.end()
#define 	sortall(x) 	sort(all(x))
#define 	w() 		while()
#define 	newl		cout<<'\n'

typedef 	vector<int> 	vi;
typedef 	vector<ll> 		vll;

void f(){
    ll n, c; cin >>n >>c;
    vi v(n);
    for(auto &i : v) cin >> i;
    if(n == 1){
    	cout << 1 << "\n";
    	return;
    }
    ll cnt = 0;
	for(ll i=0; i<n-1; i++)
	{
		if(v[i+1] - v[i] <= c){
			cnt++;
		}
		else{
			cnt = 0;
		}
	}
	if(cnt > 0){
		cout << cnt+1 << "\n";
	}
	else{
		cout << 1 << "\n";
	}
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // int TC; cin >> TC;
    // for(int k = 1; k <= TC; k++){
    //     f();
    // }
    f();
    return 0;
}