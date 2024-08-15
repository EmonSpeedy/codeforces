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
ll n, q, pref[200005], a[200005]; 
void solve() {
    cin >> n >> q;
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
        pref[i] = pref[i-1];
        pref[i] += a[i];
    }
    while(q--)
    {
        ll l, r, k;
        cin >> l >> r >> k;
        ll ans;
        ans = pref[n] - (pref[r] - pref[l-1]) + (k * (r - l + 1));
        if(ans%2 != 0) cout << "yes\n";
        else cout << "no\n"; 
    } 
}
 
int32_t main() {
    inputs();
    ll tc; cin >> tc; 
    while(tc--) solve();
}
