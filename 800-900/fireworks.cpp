/*
	In the name of Allah
	author :: md sh emon
*/
#include "bits/stdc++.h"
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
#define ll long long
 
void func() {
	ll a, b, m; cin >> a >> b >> m;
	ll cnt = 0;
	cnt += (m/a);
	cnt += (m/b);
	cout << 2 + cnt << "\n";
}
 
int32_t main() {
	fastIO;
	ll tc; cin >> tc;
	while (tc--) {
		func();
	}
}
