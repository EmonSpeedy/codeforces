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
#define 	w() 		while()
#define 	newl		cout<<'\n'

typedef 	vector<int> 	vi;
typedef 	vector<ll> 		vll;
const int N = 1e9;

void f(){
    int n; cin>>n;
    int cnt = 0;
    int l = 1, r = 1e9, c = 0;
    vi d;
    for(int i=0; i<n; i++)
    {
    	int a, x; cin>>a>>x;
    	if(a == 1) l = max(l, x);
    	if(a == 2) r = min(r, x);
    	if(a == 3) d.pb(x);
    }
    for(auto i : d)
    {
    	if(i <= r and i >= l) c++;
    }
    int ans = max(r-l + 1 - c, 0);
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