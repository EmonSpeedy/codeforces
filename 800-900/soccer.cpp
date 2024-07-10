    /*
    	In the name of Allah
    	author :: md sh emon
    */
    #include "bits/stdc++.h"
    using namespace std;
    #define fastIO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    #define ll long long
     
    void func() {
    	int x1, y1, x2, y2; cin>>x1>>y1>>x2>>y2;
    	if(x1 < y1 and x2 > y2){
    		cout << "NO\n";
    	}
    	else if(x1 > y1 and x2 < y2){
    		cout << "NO\n";
    	}
    	else cout << "YES\n";
    }
     
    int32_t main() {
    	fastIO;
    	ll tc; cin >> tc;
    	while (tc--) {
    		func();
    	}
    }
