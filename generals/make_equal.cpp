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
	int n; cin >> n;
	vi v(n);
	int sum = 0;
	rep(0,n){
		cin >> v[i];
		sum += v[i];
	}
	if(n == 1){
		cout << "Yes\n"; return;
	}
	int k = sum/n; int exs = 0;
	rep(0,n){
		if(v[i] > k){
			exs += (v[i] - k); 
		}
		else if(v[i] < k){
			int r_a = k - v[i];
			if(r_a <= exs){
				exs -= r_a;
			}
			else{
				cout << "No\n";
				return;
			}
		}
	}
	cout << "Yes\n";
}

int32_t main() {
	FastIO;
	int tc; cin >> tc;
	while (tc--) {
		func();
	}
	// func();
}
