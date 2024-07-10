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
	vi a(3); 
	rep(0,3) cin >> a[i];
	if(a[0]==a[1] and a[2]==a[1]){
		cout << "Yes\n";
		return;
	}
	sortall(a);
	if(a[1]%a[0] != 0 or a[2]%a[0] != 0){
		cout << "No\n";
		return;
	}

	int op1 = (a[1]/a[0])-1;
	int op2 = (a[2]/a[0])-1;
	if(op1+op2 <= 3){
		cout << "Yes\n";
	}
	else cout << "No\n";
}

int32_t main() {
	inp();
	int tc; cin >> tc;
	while (tc--) {
		func();
	}
	// func();
}