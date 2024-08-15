#include"bits/stdc++.h"
using namespace std;
#define ll long long
 
void solve() {
	ll n; cin >> n;
	ll cnt = 0, i = 1;
	while(n%i == 0){
		cnt++;
		i++;
	}
	cout << cnt << "\n";
}
 
int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif
	ll tc; cin >> tc;
	while(tc--) solve();
}
