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
    bool f = false;
    int sum0 = 0;
    for(int i=1; i<=n; i++)
    {
        int x; cin>>x;
        if(x==0) sum0++;
        else if(x >= 2) f = true;
    }
    if(sum0 <= (n+1)/2) cout << "0\n";
    else if(sum0 == n or f) cout << "1\n";
    else cout << "2\n";
}
 
int32_t main() {
    inputs();
    ll tc; cin >> tc; 
    while(tc--) solve();
}
