/*
	In the name of Allah
    author : md sh emon
*/
#include "bits/stdc++.h"
using namespace std;
#define 	rep(x, y)	for(int i=x, inp; i<y; i++)
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
    vi v(n);
    map<int, int> mp;
    rep(0, n)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    if(mp.size() >= 3){
        cout << "No\n";
        return;
    }
    else if(mp.size() == 1){
        cout << "Yes\n";
        return;
    }
    else{
        vi vec;
        for(auto it : mp)
        {
            vec.pb(it.s);
        }
        int dif = abs(vec[0] - vec[1]);
        if(dif <= 1){
            cout << "Yes\n";
        }else cout << "No\n";
    }
    
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int TC = 1; cin >> TC;
    for(int k = 1; k <= TC; k++){
        f();
    }
    // f();
}