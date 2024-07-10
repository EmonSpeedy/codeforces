/***************************/
/*	In the name of Allah   */
/*	author :: md sh emon   */
/***************************/
#include "bits/stdc++.h"
using namespace std;

#define int long long int
#define pb push_back
#define pob pop_back
#define mp make_pair
#define f first
#define s second
#define rep(a,b,c) for(int (a)=(b);(a)<(c);(a)++)
#define repr(a,b,c) for(int (a)=(b);(a)>=(c);(a)--)

typedef vector<int> vi;
typedef vector<char> vc;
typedef pair<int,int> pii;

void func() {
	string s; cin>>s;
	string ss = "", sss = "";
	int close = 0, open = 0;
	rep(i,0,s.size()){
		if(s[i]=='(' or s[i]==')') sss += "()";
	}
	rep(i,0,s.size()){
		if(s[i] == '(') open++;
		else close++;
	}
	rep(i,0,(open+close)) ss += '(';
	rep(i,0,(open+close)) ss += ')';
	if(ss.find(s) == string::npos){
		cout << "YES\n" << ss << "\n";
	}
	else if(sss.find(s) == string::npos){
		cout << "YES\n" << sss << "\n";
	}
	else cout << "NO\n";
}

int32_t main() {
	int tc; cin >> tc;
	while (tc--) {
		func();
	}
	// func();
}


