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

void f(){
    int n; cin>>n;
    vi v;
    v.pb(1);
    for(int i=1; i<=n-2; i++)
    {
    	v.pb(i + 2);
    }
    v.pb(2);
    for(int i : v) cout << i << " ";
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