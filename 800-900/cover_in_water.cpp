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

bool is_substring(string s, string str) {
	if(s.find(str) != string::npos){
		return true;
	}
	return false;
}

void f() {
    int n; string s;
    cin >> n >> s;
    string str = "...";
    bool f = is_substring(s, str);
    
    if(f){
    	cout << "2\n"; return;
    }
    int cnt = 0;
    rep(0, s.size())
    {
    	if(s[i] == '.') cnt++;
    }
    cout << cnt; nl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int TC = 1; cin >> TC;
    for(int k = 1; k <= TC; k++){
        f();
    }
    // f();
}