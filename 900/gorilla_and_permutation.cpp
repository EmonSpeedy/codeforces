#include "bits/stdc++.h"
using namespace std;
#define ff first
#define ss second
#define pb push_back
#define pob pop_back
#define ll long long
#define read(x) int x; cin>>x;
#define line cout << "\n"
#define all(x) x.begin(),x.end()
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
typedef vector<int> vi;
typedef vector<char> vc;
typedef pair<int,int> pii;
typedef pair<ll, ll> pll;
void inputs() {
    fastIO
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
}
 
void solve() {
    read(n); read(m); read(k);
    vi v;
    for(int i=n; i>=k; i--){
        v.pb(i);
    }
    for(int i=k-1; i>m; i--){
        v.pb(i);
    }
    for(int i=1; i<=m; i++) v.pb(i);
    for(int i : v) cout << i << " ";
    line;
}
 
int32_t main() {
    inputs();
    int tc; cin >> tc; 
    while(tc--) solve();
}