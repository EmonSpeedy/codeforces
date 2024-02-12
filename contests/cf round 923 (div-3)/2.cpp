/*
	In the name of Allah
    author : md sh emon
    todays contest
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
    vi a(n), freq(26+1);
    rep(0, freq.size()) freq[i] = 0;
    rep(0, n){
    	cin >> a[i];
    }
    string ans = "";
    rep(0, n)
    {
    	int num = a[i];
    	rep(0, freq.size())
    	{
    		if(num == freq[i]){
    			freq[i]++;
    			ans += (i + 97);
    			break;
    		}
    	}
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int TC = 1; cin >> TC;
    for(int k = 1; k <= TC; k++){
        f();
    }
    // f();
}