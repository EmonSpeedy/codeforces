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
    int n, m, k; cin >> n >> m >> k;
    vi a1(n), a2(m);
    map<int, int> mp;
    rep(0, n){
        cin >> a1[i];
        mp[a1[i]] = 1;
    }
    rep(0, m){
        cin >> a2[i];
        if(mp[a2[i]] == 1) mp[a2[i]] = 4;
        else if(mp[a2[i]] == 0) mp[a2[i]] = 2;
    }
    int a = k/2, b = k/2;
    rep(1,k+1)
    {
        if(mp[i] == 1) a--;
        if(mp[i] == 2) b--;
        if(mp[i] == 0) a = -1;
    }
    if(a >= 0 and b >= 0){
        cout << "Yes\n";
    }
    else cout << "No\n";
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int TC = 1; cin >> TC;
    for(int k = 1; k <= TC; k++){
        f();
    }
    // f();
}