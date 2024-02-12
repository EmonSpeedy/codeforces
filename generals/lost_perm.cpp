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
    int n, m; cin >> n >> m;
    vi v(n);
    for(auto &a : v) cin >> a;
    vi vis(1000+2, false);
	for(int i=0; i<n; i++) vis[v[i]] = true;
	int mx = *max_element(all(v));
	int s = 0, cur = 1;
	bool ok = false;
	while(1)
	{
		if(vis[cur]){
			cur++; continue;
		}
		s += cur;
		vis[cur] = true;
		if(s == m){
			bool imp = false;
			for(int i = cur; i <= mx; i++)
			{
				if(!vis[i]){
					imp = true; break;
				}
			}
			if(!imp){
				ok = true;
			}
			break;
		}
		cur++;
		if(s > m) break;
	}
	if(ok) cout << "Yes\n";
	else cout << "No\n";
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