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
	int n; cin>>n;
	vi v1(n), v2(n);
	rep(0,n) cin >> v1[i];
	rep(0,n) cin >> v2[i];
	vector<pii> vv;
	rep(0,n)
	{
		vv.pb({v1[i], v2[i]});
	}
	sortall(vv);
	for(auto a : vv){
		cout << a.f << " ";
	}
	cout << "\n";
	for(auto a : vv){
		cout << a.s << " ";
	}
	cout << "\n";
}

int32_t main() {
	inp();
	int tc; cin >> tc;
	while (tc--) {
		func();
	}
	// func();
}	