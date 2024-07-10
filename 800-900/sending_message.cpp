/*
	In the name of Allah
	author :: md sh emon
*/
#include "bits/stdc++.h"
using namespace std;
#define 	FastIO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define 	rep(x, y)		for(int i=x; i<y; i++)
#define 	rev(x, y)		for(int i=x; i>=0; i--)
#define		pb 				push_back
#define		f 				first
#define		s 				second
#define 	all(x) 			x.begin(),x.end()
#define 	sortall(x)		sort(all(x))
#define 	int 			long long
typedef 	vector<int>		vi;
typedef 	vector<char> 	vc;
typedef 	pair<int,int> 	pii;

const int mod = 1e9;

void inp() {
	FastIO;
	#ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
	#endif
}

void func() {
	int n, ff, a, b, init = 0;
	cin >> n >> ff >> a >> b;
	vi v(n);
	for(auto &i : v) cin >> i;
	bool flag = false;
	rep(0, n){
		int d = abs(init - v[i]);
		init = v[i];
		if(d*a >= b){
			ff -= b;
		}
		else{
			ff -= (d*a);
		}
		if(ff <= 0){
			flag = true;
			break;
		}
	}
	if(flag){
		cout << "NO\n";
	}
	else cout << "YES\n";
}

int32_t main() {
	inp();
	int tc; cin >> tc;
	while (tc--) {
		func();
	}
	// func();
}