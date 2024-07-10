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
int dx[4] = {-1,1,-1,1};
int dy[4] = {1,-1,-1,1};

void func() {
	int a, b, xk, yk, xq, yq;
	cin>>a>>b>>xk>>yk>>xq>>yq;
	set<pii> st1,st2;
	for(int i=0; i<4; i++)
	{
		st1.insert({xk+dx[i] * a, yk+dy[i] * b});
		st1.insert({xk+dx[i] * b, yk+dy[i] * a});
		st2.insert({xq+dx[i] * a, yq+dy[i] * b});
		st2.insert({xq+dx[i] * b, yq+dy[i] * a});
	}
	int ans = 0;
	for(auto i : st1){
		if(st2.find(i) != st2.end()) ans++;
	}
	cout << ans << "\n";
}

int32_t main() {
	inp();
	int tc; cin >> tc;
	while (tc--) {
		func();
	}
	// func();
}