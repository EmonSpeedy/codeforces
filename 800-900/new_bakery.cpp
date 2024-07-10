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
    	ll n, a, b; cin >> n >> a >> b;
    	if(a >= b) {
    		cout << (n * a) << '\n';
    		return;
    	}
    	ll d = b - a, ans = 0;
    	if(d >= n){
    		ll f, l;
    		f = b; l = (f - n) + 1;
    		ans = (n*(f+l))/2;
    	}
    	else{
    		ll r = n - d;
    		ans = r * a;
    		ll f, l;
    		f = b; l = b - d + 1;
    		ans += (d*(f+l))/2;
    	}
    	cout << ans << "\n";
    }
     
    int32_t main() {
    	fastIO;
    	ll tc; cin >> tc;
    	while(tc--) solve();
    }
