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
    string s; cin >> s;
    int cur = 1, ans = 1;
    for(int i=1; i<n; i++){
        if(s[i] == s[i-1]) cur++;
        else{
            ans = max(ans, cur);
            cur = 1;
        }
    }
    ans = max(ans, cur);
    cout << ans+1 << "\n";
}
 
int32_t main() {
    inputs();
    ll tc; cin >> tc; 
    while(tc--) solve();
}
