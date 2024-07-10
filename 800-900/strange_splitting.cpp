/*
	In the name of Allah
	author :: md sh emon
*/
#include "bits/stdc++.h"
using namespace std;

void inp() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
	#endif
}

int32_t main() {
	inp();
	int tc; cin >> tc;
	while (tc--) {
		int n; cin >> n;
		int a[n];
		for(int i=0; i<n; i++) cin >> a[i];

		if((a[n-1] - a[0]) == 0){
			cout << "NO\n";
		}
		else{
			cout << "YES\n";
			char color[n];
			color[1] = 'B';
			for(int i=0; i<n; i++){
				if(color[i] != 'B') color[i] = 'R';
			}
			for(int i=0; i<n; i++){
				cout << color[i];
			}
			cout << "\n";
		}
	}
}