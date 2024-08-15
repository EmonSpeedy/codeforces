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
    int n, k; cin >> n >> k;
    int L = 0, R = 51;
    while(n--)
    {
        int l, r; cin >>l >> r;
        if(k <= r and k >= l)
        {
            L = max(L, l);
            R = min(R, r);
        }
    }
    cout << (L == R? "YES\n" : "NO\n"); 
}
 
int32_t main() {
    inputs();
    ll tc; cin >> tc; 
    while(tc--) solve();
}
