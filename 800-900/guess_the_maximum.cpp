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
    	read(n);
    	vi a(n);
    	fr(i,0,n) cin >> a[i];
    	vi nums;
    	fr(i,1,n){
    		nums.pb(max(a[i], a[i-1]));
    	}
    	int v = *min_element(all(nums));
    	v--;
    	cout << v << "\n";
    }
     
    int32_t main() {
    	fastIO;
    	int tc; cin >> tc;
    	while(tc--) solve();
    }
