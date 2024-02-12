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
    int n, k; cin >> n >> k;
    vi v(n);
    rep(0, n) cin >> v[i];
    bool f = true;
    rep(1, n)
    {
    	if(v[i] < v[i-1]){
    		f = false; break;
    	}
    }
    if(f){
    	cout << "YES\n"; return;
    }
    if((n > 1 and k == 1) or (k > 1 and n == 1)){
    	cout << "NO\n";
    	return;
    }
    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int TC = 1; cin >> TC;
    for(int k = 1; k <= TC; k++){
        f();
    }
    // f();
}