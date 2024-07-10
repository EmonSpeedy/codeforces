/*
	In the name of Allah
	author :: md sh emon
*/
#include "bits/stdc++.h"
using namespace std;

#define fastIO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);

void inp() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
	#endif
}

void func() {
	int n,m,k; cin >> n >> m >> k;
	int max_color = (n+m-1)/m;
	if(max_color + k < n){
		cout << "YES\n";
	}
	else cout << "NO\n";
}

int32_t main() {
	fastIO;
	inp();
	int tc; cin >> tc;
	while (tc--) {
		func();
	}
}