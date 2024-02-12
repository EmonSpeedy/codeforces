/*
	In the name of Allah
    author : md sh emon
*/
#include "bits/stdc++.h"
using namespace std;
#define 	rep(x, y)	for(int i=x; i<y; i++)
#define 	ll 			long long
#define 	pb 			push_back
#define 	mp 			make_pair
#define 	f 			first
#define 	s 			second
#define 	all(x) 		x.begin(),x.end()
#define 	sortall(x) 	sort(all(x))
#define 	w 			while
#define 	nl			cout<<"\n"

typedef 	pair<int,int> 	pii;
typedef 	pair<ll,ll> 	pll;
typedef 	vector<int> 	vi;
typedef 	vector<ll> 		vll;

const int mod = 1000000007;
const int N = 2e5;

bool is_substring(string x, string s) {
	if(x.find(s) != string :: npos)
		return true;
	return false;
}

void f() {
    int n, m; cin >> n >> m;
    string x, s; cin >> x >> s;
    bool is_sub = is_substring(x, s);
    if(is_sub){
    	cout << "0\n";
    	return;
    }
    int op = 0; bool f = false;
    w(true)
    {
    	op++;
    	x += x;
    	if(is_substring(x, s)){
    		f = true;
    		break;
    	}
    	if(x.size() >= n*m) break;
    }
    if(!f){
    	cout << "-1\n";
    }
    else{
    	cout << op << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int TC = 1; cin >> TC;
    for(int k = 1; k <= TC; k++){
        f();
    }
    // f();
}