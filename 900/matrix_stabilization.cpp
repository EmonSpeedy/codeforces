/*
	Bismillah
	Author: Emon
*/
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
void inputs() {
	fastIO
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif
}
   
void solve() {
	read(n);
	read(m);
	int mat[n+2][m+2];
	fr(i,0,n+2){
		fr(j,0,m+2) mat[i][j] = 0;
	}
	fr(i,1,n+1){
		fr(j,1,m+1) cin >> mat[i][j];
	}
	
	fr(i,1,n+1){
		fr(j,1,m+1){
			int v = mat[i][j];
			int l = v - mat[i][j-1];
			int r = v - mat[i][j+1];
			int u = v - mat[i-1][j];
			int d = v - mat[i+1][j];
			if(l > 0 && r > 0 && u > 0 && d > 0){
				int mn = min(min(l,r), min(u,d));
				v = v - mn;
				mat[i][j] = v;
			} 
		}
	}
	
	fr(i,1,n+1){
		fr(j,1,m+1){
			cout << mat[i][j] << " ";
		}
		line;
	}
	
}
 
int32_t main() {
	inputs();
	int tc; cin >> tc;
	while(tc--) solve();
}
