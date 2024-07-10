/*
	In the name of Allah
	author :: md sh emon
*/
#include "bits/stdc++.h"
using namespace std;
#define 	FastIO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define 	rep(x, y)		for(int i=x; i<y; i++)
#define 	rev(x, y)		for(int i=x; i>=y; i--)
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
	int x, y, n; cin>>x>>y>>n;
	vi v(n);
	v[0] = x; v[n-1] = y;
	int val = 1;
	rev(n-2, 1)
	{
		v[i] = v[i+1] - val;
		val++;
	}
	bool f = true;
	rep(1, n-1)
	{
		
		if((v[i] - v[i-1]) <= (v[i+1] - v[i])){
			f = false;
			break;
		}
	}
	if(!f){
		cout << -1 << "\n";
		return;
	}
	for(auto a : v){
		cout << a << " ";
	}
	nl;
}

int32_t main() {
	FastIO;
	int tc, test_case = 0; cin >> tc;
	while (tc--) {
		func();
	}
}