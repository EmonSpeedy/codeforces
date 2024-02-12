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
	int n; cin >> n;
	vi vec(2*n);
	vector<pii> ans;
	rep(0,n+n) cin >> vec[i];
	sortall(vec); int dis = 0;
	for(int i=0, j=vec.size()-1; i<n; i++, j--)
	{
		ans.pb({vec[i], vec[j]});
	}
	rep(1,n)
	{
		dis += abs(ans[i-1].f - ans[i].f);
		dis += abs(ans[i-1].s - ans[i].s);
	}
	cout << dis << "\n";
	for(auto a : ans){
		cout << a.f << " " << a.s << "\n";
	}
}

int32_t main() {
	FastIO;
	int tc, test_case = 0; cin >> tc;
	while (tc--) {
		func();
	}
}