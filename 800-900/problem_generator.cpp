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
    	int n, m; cin >> n >> m;
    	int ar[8];
    	fr(i,0,8) ar[i] = 0;
    	string s; cin >> s;
    	fr(i,0,n){
    		if(s[i] == 'A') ar[1]++;
    		if(s[i] == 'B') ar[2]++;
    		if(s[i] == 'C') ar[3]++;
    		if(s[i] == 'D') ar[4]++;
    		if(s[i] == 'E') ar[5]++;
    		if(s[i] == 'F') ar[6]++;
    		if(s[i] == 'G') ar[7]++;
    	}
    	int ans = 0;
    	fr(i,1,8){
    		if(ar[i] < m) ans = ans + (m - ar[i]);
    	}
    	cout << ans << "\n";
    }
     
    int32_t main() {
    	fastIO;
    	int tc; cin >> tc;
    	while(tc--) solve();
    }
