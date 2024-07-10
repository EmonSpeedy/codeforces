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

void f() {
    int n; cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int cnt = 0, s1one = 0, s2one = 0;
    rep(0, n)
    {
    	if(s1[i] == '1') s1one++;
    	if(s2[i] == '1') s2one++;
    	if(s1[i] != s2[i] and s2[i] == '1') cnt++;
    }
    int ans = cnt;
    if(s1one > s2one){
    	ans += (s1one - s2one);
    }
    cout << ans; nl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int TC = 1; cin >> TC;
    for(int k = 1; k <= TC; k++){
        f();
    }
    // f();
}