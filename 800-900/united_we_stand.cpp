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
	vi vec(n), b, c;
	rep(0, n) cin>>vec[i];
	sortall(vec);
	int i = 0, j = n-1;
	if(vec[0] == vec[j]){
		cout << "-1\n";
		return;
	}
	while(i <= j){
		if(vec[i] == vec[j]){
			c.pb(vec[i]);
			i++;
		}
		else{
			b.pb(vec[i]);
			i++;
		}
	}
	
	cout << b.size() << " " << c.size() << "\n";
	for(auto a : b) cout << a << " ";
	nl;
	for(auto a : c) cout << a << " "; nl;
}

int32_t main() {
	FastIO;
	int tc, test_case = 0; cin >> tc;
	while (tc--) {
		func();
	}
}