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
//#define 	int 			long long
typedef 	vector<int>		vi;
typedef 	vector<char> 	vc;
typedef 	pair<int,int> 	pii;

const int mod = 1e9;

void inp() {
	FastIO;
	#ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin);
	#endif
}

void func() {
	int n,k,x; cin>>n>>k>>x;
	if(k==1){
		cout << "NO\n"; return;
	}
	if(x != 1){
		cout << "YES\n";
		cout << n << "\n";
		while(n--) cout << 1 << " ";
		cout << "\n"; return;
	}
	if(k==2 and n%2 != 0){
		cout << "NO\n"; return;
	}
	cout << "YES\n";
	if(n%2 == 0){
		cout << n/2 << "\n";
		int len = (n/2);
		while(len--) cout << 2 << " ";
		cout << "\n";
	}
	else{
		int len = ((n/2)-1) + 1;
		cout << len << "\n";
		len--;
		while(len--) cout << 2 << " ";
		cout << 3 << "\n";
	}
}

int32_t main() {
	inp();
	int tc; cin >> tc;
	while (tc--) {
		func();
	}
	// func();
}
