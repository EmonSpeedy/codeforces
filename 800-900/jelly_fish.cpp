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
	int a, b, n; cin>>a>>b>>n;
	vi t(n);
	rep(0,n) cin>>t[i];
	int answer = 0;
	if(b > 1){
		answer += (b-1);
	}
	rep(0,n){
		if(t[i] + 1 < a){
			answer += t[i];
		}
		else{
			answer += (a - 1);
		}
	}
	answer++;
	cout<<answer<<"\n";
}

int32_t main() {
	inp();
	int tc; cin >> tc;
	while (tc--) {
		func();
	}
	// func();
}