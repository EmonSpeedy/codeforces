/*
    In the name of Allah
    author :: md sh emon
*/
#include "bits/stdc++.h"
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);
 
void func() {
    int n; cin >> n;
    int cnt = 0, one[n];
    for(int i=0; i<n; i++){
    	string s; cin >> s;
    	for(int j=0; j<s.size(); j++){
    		if(s[j] == '1') cnt++;
    	}
    	one[i] = cnt; cnt = 0;
    }
    sort(one, one+n);
    if(one[n-1] == one[n-2]){
    	cout << "SQUARE\n";
    }
    else cout << "TRIANGLE\n";
}
 
int32_t main() {
    fastIO;
    int tc; cin >> tc;
    while (tc--) {
        func();
    }
    return 0;
}
