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

void func() {
	int n; cin>>n;
	vi v(n);
	rep(0,n) cin>>v[i];
	
	vi ans;
	ans.pb(v[0]);
	rep(1,n){
		if(v[i] >= v[i-1]){
			ans.pb(v[i]);
		}
		else{
			ans.pb(v[i]);
			ans.pb(v[i]);
		}
	}
	cout << ans.size() << "\n";
	for(auto a : ans) cout << a << " ";
	nl;
}

int32_t main() {
	FastIO;
	int tc, test_case = 0; cin >> tc;
	while (tc--) {
		func();
	}
}