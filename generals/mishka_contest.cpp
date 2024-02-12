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
    int n, k; cin >> n >> k;
    vi v(n);
    for(auto &a : v) cin >> a;
    int cnt1 = 0, cnt2 = 0;
	for(int i=0; i<n; i++)
	{
		if(v[i] <= k){
			cnt1++;
		}
		else break;
	}
	for(int i=n-1; i>=0; i--)
	{
		if(v[i] <= k){
			cnt2++;
		}
		else break;
	}
	if(cnt1 == n){
		cout << cnt1; newl;
	}
	else{
		cout << cnt1+cnt2; newl;
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