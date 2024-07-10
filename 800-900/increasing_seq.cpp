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
    vi a(n);
    rep(0, n) cin >> a[i];
    vi b(n);
    if(a[0] == 1) b[0] = 2;
    else b[0] = 1;
    
    rep(1, n)
    {
    	if(a[i] == b[i-1] + 1){
    		b[i] = b[i-1] + 2;
    	}
    	else{
    		b[i] = b[i-1] + 1;
    	}
    }
    cout << b[n-1]; nl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int TC = 1; cin >> TC;
    for(int k = 1; k <= TC; k++){
        f();
    }
    // f();
}