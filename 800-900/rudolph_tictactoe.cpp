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
	#endif
}

void func() {
	char a[3][3];
	rep(0,3){
		for(int j=0; j<3; j++) cin>>a[i][j];
	}
	string ch="DRAW"; 
	if(a[0][0]==a[1][1] and a[1][1]==a[2][2] and a[0][0]!='.'){
		ch = a[0][0];
	}
	if(a[0][2]==a[1][1] and a[1][1]==a[2][0] and a[0][2]!='.'){
		ch = a[0][2]; 
	}
	if(a[0][0]==a[1][0] and a[1][0]==a[2][0] and a[0][0]!='.'){
		ch = a[0][0]; 
	}
	if(a[0][1]==a[1][1] and a[1][1]==a[2][1] and a[0][1]!='.'){
		ch = a[0][1];
	}
	if(a[0][2]==a[1][2] and a[1][2]==a[2][2] and a[0][2]!='.'){
		ch = a[0][2];
	}
	if(a[0][0]==a[0][1] and a[0][1]==a[0][2] and a[0][0]!='.'){
		ch = a[0][0];
	}
	if(a[1][0]==a[1][1] and a[1][1]==a[1][2] and a[1][0]!='.'){
		ch = a[1][0];
	}
	if(a[2][0]==a[2][1] and a[2][1]==a[2][2] and a[2][0]!='.'){
		ch = a[2][0];
	}
	cout << ch << "\n";
}

int32_t main() {
	inp();
	int tc; cin >> tc;
	while (tc--) {
		func();
	}
	// func();
}
