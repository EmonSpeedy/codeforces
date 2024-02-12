/*
	In the name of Allah
    author : md sh emon
*/
#include "bits/stdc++.h"
using namespace std;
#define 	rep(x, y)	for(int i=x; i<y; i++)
#define 	ll 			long long
#define 	pb 			push_back
#define 	mp 			make_pair
#define 	f 			first
#define 	s 			second
#define 	all(x) 		x.begin(),x.end()
#define 	sortall(x) 	sort(all(x))
#define 	w 			while
#define 	nl			cout<<"\n"

typedef 	pair<int,int> 	pii;
typedef 	pair<ll,ll> 	pll;
typedef 	vector<int> 	vi;
typedef 	vector<ll> 		vll;

const int mod = 1000000007;
const int N = 2e5;

bool ok(string s) {
	rep(0, s.size() - 1)
	{
		if(s[i] == s[i+1])
			return false;
	}
	return true;
}

void f() {
    int n, m; cin >> n >> m;
    string s, t; cin >> s >> t;
    if(ok(s)){
    	cout << "yes\n";
    	return;
    }
    if(!ok(t) or t[0] != t[t.size()-1]){
    	cout << "no\n"; return;
    }
    int z = 0, o = 0;
    rep(1, s.size())
    {
    	if(s[i] == s[i-1]){
    		if(s[i] == '0') z = 1;
    		if(s[i] == '1') o = 1;
    	}
    }
    if(z and t[0] == '0'){
    	cout << "no\n"; return;
    }
    if(o and t[0] == '1'){
    	cout << "no\n"; return;
    }
    cout << "yes\n";
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int TC = 1; cin >> TC;
    for(int k = 1; k <= TC; k++){
        f();
    }
    // f();
}