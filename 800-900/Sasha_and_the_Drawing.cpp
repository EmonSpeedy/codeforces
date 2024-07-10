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

void func() {
	int n, k; cin >> n >> k;
	int ttl = (4*n) - 2;
	if(k == ttl){
		cout << 2*n << "\n";
	}
	else{
		if(k%2 == 0){
			cout << k/2 << "\n";
		}else{
			cout << (k/2)+1 << "\n";
		}
	}
}

int32_t main() {
	FastIO;
	int tc; cin >> tc;
	while (tc--) {
		func();
	}
	// func();
}
