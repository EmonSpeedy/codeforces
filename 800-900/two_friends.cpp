/*
    In the name of Allah
    author :: md sh emon
*/
#include "bits/stdc++.h"
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);
 
void func() {
    int n; cin >> n;
    vector<int> a(n+1);
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    int ans = 3;
    for(int i=1; i<=n; i++){
        if(a[a[i]] == i){ 
            ans = 2;
            break;
        }
    }
    cout << ans << '\n';
}
 
int32_t main() {
    fastIO;
    int tc; cin >> tc;
    while (tc--) {
        func();
    }
    return 0;
}
