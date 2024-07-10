/*****************************/
/*    In the name of Allah   */
/*    author :: md sh emon   */
/*****************************/
#include "bits/stdc++.h"
using namespace std;

#define int long long int
#define pb push_back
#define pob pop_back
#define mp make_pair
#define f first
#define s second
#define rep(a,b,c) for(int a=b;a<c;a++)
#define repr(a,b,c) for(int a=b;a>=c;a--)

typedef vector<int> vi;
typedef vector<char> vc;
typedef pair<int,int> pii;

void func() {
    int x; cin >> x;
    int ans = 0, yy;
    rep(i, 1, x){
        int can = __gcd(x, i);
        can += i;
        if(can > ans){
            ans = can;
            yy = i;
        }
    }
    cout << yy << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc; cin >> tc;
    while (tc--) {
        func();
    }
    // func();
}

