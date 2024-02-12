/*
	In the name of Allah
    author : md sh emon
*/
#include "bits/stdc++.h"
using namespace std;
#define 	ll 			long long
#define 	pb 			push_back
#define 	mp 			make_pair
#define 	f 			first
#define 	s 			second
#define 	all(x) 		x.begin(),x.end()
#define 	sortall(x) 	sort(all(x))
#define 	w() 		while()
#define 	newl		cout<<'\n'

typedef 	pair<int,int> 	pii;
typedef 	pair<ll,ll> 	pll;
typedef 	vector<int> 	vi;
typedef 	vector<ll> 		vll;

const int mod = 1000000007;
const int N = 999999 + 2;
vi src;

bool check(int i){
    string s = to_string(i);
    int cnt = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] != '0') cnt++;
    }
    if(cnt == 1) return true;
    else return false;
}

void fill_it(){
    for(int i=1; i<N; i++)
    {
        if(i < 10){
            src.pb(i);
            continue;
        }
        bool f = check(i);
        if(f) src.pb(i);
    }
}

void f(){
    int n; cin >> n;
    int ans = 0;
    for(auto i : src){
        if(i <= n){
            ans++; 
        }
    }
    cout << ans; newl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    fill_it();
    int TC = 1; cin >> TC;
    for(int k = 1; k <= TC; k++){
        f();
    }
    //f();
    return 0;
}