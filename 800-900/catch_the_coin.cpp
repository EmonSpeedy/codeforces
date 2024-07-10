    /*========================================__________===============================================//
    \/\/=====================================|BISMIALLAH|============================================\/\/
    /\/\=====================================|MD SH EMON|============================================/\/\
    //========================================----------===============================================*/
    #include"bits/stdc++.h"
    using namespace std;
    #define f first
    #define s second
    #define pb push_back
    #define pob pop_back
    #define ll long long
    #define read(x); int x; cin>>x;
    #define line cout << "\n"
    #define all(x) x.begin(),x.end()
    #define fr(a,b,c) for(int a=b;a<c;a++)
    #define frv(a,b,c) for(int a=b;a>=c;a--)
    #define fastIO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    typedef vector<int>	vi;
    typedef vector<char> vc;
    typedef pair<int,int> pii;
    //===========================================HEADERS===============================================//
    void solve() {
    	int x, y; cin >> x >> y;
    	if((x >= 0 and y >= 0) || (x <= 0 and y >= 0)){
    		cout << "YES\n";
    		return;
    	}
    	if((x >= 0 and y <= 0) || (x <= 0 and y <= 0)){
    		if(y >= -1){
    			cout << "YES\n";
    			return;
    		}
    	}
    	cout << "NO\n";
    }
     
    int32_t main() {
    	fastIO;
    	int tc; cin >> tc;
    	while(tc--) solve();
    }
