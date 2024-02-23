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
	int num1 = n, num2 = n-1;
	for(int i=0; i<n; i+=2){
		v[i] = num1;
		num1 -= 2;
	}
	int sz = 0;
	if(n%2 == 0) sz = n-1;
	else sz = n-2;
	for(int i=sz; i>= 0; i-=2){
		v[i] = num2;
		num2 -= 2;
	} 
	for(auto i : v) cout << i << " ";	
	cout << "\n";
}

int32_t main() {
	FastIO;
	int tc; cin >> tc;
	while (tc--) {
		func();
	}
	// func();
}
