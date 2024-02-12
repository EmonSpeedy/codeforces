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
    string s; cin>>s;
    vi ara(27);
    int cnt = 0;
    for(int i=0; i<27;i++) ara[i] = 0;
    for(int i=0; i<s.size(); i++)
    {
    	ara[s[i]-64]++;
    }
    for(int i=1; i<27; i++)
    {
    	if(ara[i] >= i) cnt++;
    }
    cout << cnt << "\n";
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