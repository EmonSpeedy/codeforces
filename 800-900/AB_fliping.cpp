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
	int n; cin >> n;
	string s; cin >> s;
	int answer = n-1;
	rep(0,n){
		if(s[i]=='B'){
			answer--;
		}
		if(s[i]=='A') break;
	}
	rev(n-1,0){
		if(s[i]=='A'){
			answer--;
		}
		if(s[i]=='B') break;
	}
	if(answer < 0) cout << 0 << "\n";
	else cout << answer << "\n";
}

int32_t main() {
	inp();
	int tc; cin >> tc;
	while (tc--) {
		func();
	}
	// func();
}