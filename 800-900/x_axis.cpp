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
    	read(x1);
    	read(x2);
    	read(x3);
    	int ans = 100;
    	int v1 = abs(x1-x1) + abs(x1-x2) + abs(x1-x3);
    	ans = min(ans, v1);
    	int v2 = abs(x2-x1) + abs(x2-x2) + abs(x2-x3);
    	ans = min(ans, v2);
    	int v3 = abs(x3-x1) + abs(x3-x2) + abs(x3-x3);
    	ans = min(ans, v3);
    	cout << ans << '\n';
    }
     
    int32_t main() {
    	fastIO;
    	int tc; cin >> tc;
    	while(tc--) solve();
    }
