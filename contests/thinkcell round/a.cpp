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
#define		nl				cout << "\n"
#define 	int 			long long

typedef 	vector<int>		vi;
typedef 	vector<char> 	vc;
typedef 	pair<int,int> 	pii;

const int mod = 1e9;

void inp() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
	#endif
}

void func() {
	int n; cin >> n;
	vi v(2*n);
	rep(0,2*n) cin >> v[i];
	int scr = 0;
	sortall(v);
	for(int i=0; i<2*n; i+=2){
		scr += min(v[i], v[i+1]);
	}
	cout << scr << "\n";
}

int32_t main() {
	FastIO;
	inp();
	int tc, test_case = 0; cin >> tc;
	while (tc--) {
		func();
	}
}

