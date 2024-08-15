#include"bits/stdc++.h"
using namespace std;
#define ll long long
 
void solve() {
	int n, k; cin >> n >> k;
	int ara[n];
	for(int i=0; i<n; i++) cin >> ara[i];
	if(n == 1) {
		cout << 0 << "\n";
		return;
	}
	sort(ara, ara+n);
	int ans = 1, cnt = 1;
	for(int i=1; i<n; i++){
		if(ara[i] - ara[i-1] > k) cnt = 1;
		else cnt++;
		
		ans = max(ans, cnt);
	}
	cout << n - ans << "\n";
}
 
int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif
	int tc; cin >> tc;
	while(tc--) solve();
}
