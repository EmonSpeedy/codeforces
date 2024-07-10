/*
    In the name of Allah
    author :: md sh emon
*/
#include "bits/stdc++.h"
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);
 
void func() {
    int n; cin >> n;
    string s; cin >> s;
    int cnt = 0;
    bool f = false;
    for(int i=0; i<n; i++){
        if(s[i]=='1') {
            cnt++;
        }
        if(i > 0 && s[i]=='1' && s[i-1]=='1'){
            f = true;
        }
    }
    if(cnt%2 != 0 || (cnt == 2 && f==true)){
        cout << "NO\n";
    }
    else cout << "YES\n";
}
 
int32_t main() {
    fastIO;
    int tc; cin >> tc;
    while (tc--) {
        func();
    }
    return 0;
}
