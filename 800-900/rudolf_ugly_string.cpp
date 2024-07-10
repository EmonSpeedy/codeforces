    /*
    	In the name of Allah
    	author :: md sh emon
    */
    #include "bits/stdc++.h"
    using namespace std;
    #define fastIO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    #define ll long long
     
    void func() {
    	int n; cin >> n;
    	string s; cin >> s;
    	int cnt = 0;
    	for(int i=4; i<n; i++){
    		if(s[i-4]=='m' and s[i-3]=='a' and s[i-2]=='p' and s[i-1]=='i' and s[i]=='e') cnt++;
    	}
    	for(int i=0; i<=n-3; i++){
    		if(s[i]=='m' and s[i+1]=='a' and s[i+2]=='p' and s[i+3]=='i' and s[i+4]=='e'){
    			i+=4;
    			continue;
    		}
    		if(s[i]=='p' and s[i+1]=='i' and s[i+2]=='e') cnt++;
    		if(s[i]=='m' and s[i+1]=='a' and s[i+2]=='p') cnt++;
    	}
    	cout << cnt << "\n";
    }
     
    int32_t main() {
    	fastIO;
    	ll tc; cin >> tc;
    	while (tc--) {
    		func();
    	}
    }
