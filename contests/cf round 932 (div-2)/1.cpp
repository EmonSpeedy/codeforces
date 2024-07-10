/***************************/
/*	In the name of Allah   */
/*	author :: md sh emon   */
/***************************/
#include "bits/stdc++.h"
using namespace std;

#define int long long int
#define pb push_back
#define pob pop_back
#define mp make_pair
#define f first
#define s second
#define rep(a,b,c) for(int (a)=(b);(a)<(c);(a)++)
#define repr(a,b,c) for(int (a)=(b);(a)>=(c);(a)--)

typedef vector<int> vi;
typedef vector<char> vc;
typedef pair<int,int> pii;

void read() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
	#endif
}

void func() {
    int n; cin >> n;
	string s; cin >> s;
    string s1 = "",s2 = "",s3;
    s1 += s;
    s3 = s;
    reverse(s3.begin(), s3.end());
    s1 += s3;
    s2 += s3;
    s2 += s;
    string ans;
    if(s < s2 and s < s1){
        ans = s;
    }
    else if(s1 < s2 and s1 < s) ans = s1;
    else ans = s2;
    cout << ans << "\n";
}

int32_t main() {
	read();
	int tc; cin >> tc;
	while (tc--) {
		func();
	}
	// func();
}



