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
	int a, b, c; cin >> a >> b >> c;
	if(a == b){
		cout << "0\n";
		return;
	}
	if(abs(a-b) <= c){
		cout << "1\n";
		return;
	}
	int cand = abs(a-b);
	if(cand%c != 0){
		cand = cand / c;
		cand++;
	}
	else cand = cand / c;
	if(cand%2 == 0){
		cand = cand / 2;
	}
	else cand = (cand/2) + 1;
	cout << cand; nl;
}

int32_t main() {
	FastIO;
	int tc, test_case = 0; cin >> tc;
	while (tc--) {
		func();
	}
}