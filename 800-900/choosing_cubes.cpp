    /*
    	In the name of Allah
    	author :: md sh emon
    */
    #include "bits/stdc++.h"
    using namespace std;
    #define fastIO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    #define ll long long
     
    void func() {
    	int n, f, k; cin >> n >> f >> k;
    	int ara[n];
    	for(int i=0; i<n; i++) cin >> ara[i];
    	int fav = ara[f-1];
    	sort(ara, ara+n, greater<int>());
    	int find = 0;
    	bool flag = false;
    	for(int i=0; i<k; i++){
    		if(ara[i] == fav){
    			find++;
    			flag = true;
    			break;
    		}
    	}
    	for(int i=k; i<n; i++){
    		if(ara[i] == fav){
    			find++;
    			break;
    		}
    	}
    	if(find == 2){
    		cout << "MAYBE\n";
    	}
    	else if(find == 1 and flag){
    		cout << "YES\n";
    	}
    	else cout << "NO\n";
    	
    }
     
    int32_t main() {
    	fastIO;
    	ll tc; cin >> tc;
    	while (tc--) {
    		func();
    	}
    }
