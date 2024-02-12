/*
	In the name of Allah
    author : md sh emon
*/
#include "bits/stdc++.h"
using namespace std;
#define 	ll 			long long
#define 	pb 			push_back
#define 	mp 			make_pair
#define 	f 			first
#define 	s 			second
#define 	all(x) 		x.begin(),x.end()
#define 	sortall(x) 	sort(all(x))
#define 	w() 		while()
#define 	newl		cout<<'\n'

typedef 	pair<int,int> 	pii;
typedef 	pair<ll,ll> 	pll;
typedef 	vector<int> 	vi;
typedef 	vector<ll> 		vll;

const int mod = 1000000007;
const int N = 2e5;

void f(){
    vi v(3);
    for(int i=0; i<3; i++) cin >> v[i];
    sortall(v);
	int mx = v[2]; int ans = 0;
	if(mx > (v[0]+v[1]-1)){
		ans = max(0, mx - (v[0]+v[1]-1));
	}
	cout << abs(ans); newl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // int TC = 1; cin >> TC;
    // for(int k = 1; k <= TC; k++){
    //     f();
    // }
    f();
    return 0;
}