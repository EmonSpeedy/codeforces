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
	int n, a, b; cin>> n >>a >> b;
	int price1 = n*a;
	int y = n%2;
	int p = 0; 
	n = n/2; p += (y*a); p += (n*b);
	int price2 = p;
	cout << min(price1, price2) << "\n";
}

int32_t main() {
	fastIO;
	inp();
	int tc; cin >> tc;
	while (tc--) {
		func();
	}
}