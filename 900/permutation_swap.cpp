#include <bits/stdc++.h>
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
    int n; cin >> n;
    vi ar(n);
    for(auto &i : ar) cin >> i;
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = __gcd(ans, abs(ar[i] - (i+1)));
    }
    cout << ans << "\n";
}
 
int32_t main() {
    inputs();
    ll tc; cin >> tc; 
    while(tc--) solve();
}
