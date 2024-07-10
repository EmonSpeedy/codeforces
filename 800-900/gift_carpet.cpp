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
	int n, m; cin>>n>>m;
	vector<string> car(n);
	rep(0, n) cin>>car[i];
	string s = "vika";
	
	int f = 0;
	rep(0, m){
		bool chc = false;
		for(int j=0; j<n; j++){
			if(car[j][i] == s[f]){
				chc = true;
			}
		}
		if(chc){
			f++;
			if(f == 4) break;
		}
	}
	if(f == 4) cout << "Yes\n";
	else cout << "No\n";
}

int32_t main() {
	FastIO;
	int tc, test_case = 0; cin >> tc;
	while (tc--) {
		func();
	}
}