/*
	In the name of Allah
	author :: md sh emon
*/
#include "bits/stdc++.h"
using namespace std;

#define ll long long

void func() {
	int k, q; cin >> k >> q;
	vector<int> a(k);
	for(int i=0; i<k; i++) cin >> a[i];
	vector<int> num;
	while(q--){
		int p; cin >> p;
		while(1){
			if(a[0] > p) {
				num.push_back(p);
				break;
			}
			else{
				p--;
			}
		}
	}
	for(auto i : num) cout  << i << " ";
	cout << "\n";
}

int32_t main() {
	int tc; cin >> tc;
	while (tc--) {
		func();
	}
}