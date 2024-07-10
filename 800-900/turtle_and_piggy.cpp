/*
	In the name of Allah
	author :: md sh emon
*/
#include "bits/stdc++.h"
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
 
void func() {
	int l, r; cin >> l >> r;
	int n = 2, cnt = 0;
	while(n <= r){
		n = (2*n);
		cnt++;
	}
	cout << cnt << "\n";
}
 
int32_t main() {
	fastIO;
	int tc; cin >> tc;
	while (tc--) {
		func();
	}
}
