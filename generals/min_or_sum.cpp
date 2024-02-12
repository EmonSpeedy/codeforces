/*
	In the name of Allah
    author : md sh emon
*/
#include "bits/stdc++.h"
using namespace std;
#define 	ll 			long long
#define 	pb 			push_back
#define 	all(x) 		x.begin(),x.end()
#define 	sortall(x) 	sort(all(x))
#define 	w 		    while
#define 	newl		cout<<'\n'

typedef 	vector<int> 	vi;
typedef 	vector<ll> 		vll;

void f(){
    ll n; cin >> n;
    int ans = 0;
    w(n--)
    {
        int x; cin >> x;
        ans |= x;
    }
    cout << ans;
    newl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int TC; cin >> TC;
    for(int k = 1; k <= TC; k++){
        f();
    }
    //f();
    return 0;
}