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
    int n; cin>>n;
    vi s(n), e(n);
    for(int i=0; i<n; i++)
    {
    	cin >> s[i]; 
    	cin >> e[i];
    }
    int w = s[0];
    for(int i=1; i<n; i++)
    {
    	if(s[i] < w) e[i] = 0;
    }
    int mx = e[0];
    bool ok = true;
    for(int i=1; i<n; i++)
    {
    	if(e[i] >= mx){
    		ok = false;
    	}
    }
    if(!ok) cout << "-1\n";
    else cout << w << "\n";
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int TC = 1; cin >> TC;
    for(int k = 1; k <= TC; k++){
        f();
    }
    //f();
    return 0;
}