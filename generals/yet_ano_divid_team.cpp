/*
	In the name of Allah
    author : md sh emon
*/
#include "bits/stdc++.h"
using namespace std;
#define 	ll 			long long
#define 	pb 			push_back
#define 	all(x) 		x.begin(),x.end()
#define 	sortall(x) 	sort(all(x))
#define 	w() 		while()
#define 	newl		cout<<'\n'

typedef 	vector<int> 	vi;
typedef 	vector<ll> 		vll;

void f(){
    int n; cin >> n;
    vi v(n);
    for(auto &a : v) cin >> a;
    if(n == 1){
    	cout << 1 << '\n';
    	return;
    }
    bool flag = true;
    for(int i=0; i<n; i++)
    {
    	for(int j=0; j<i; j++)
    	{
    		if(abs(v[i] - v[j]) == 1){
    			flag = false;
    			break;
    		}
    	}
    }
    if(!flag){
    	cout << 2 << "\n";
    }
    else cout << 1 << "\n";
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int TC; cin >> TC;
    for(int k = 1; k <= TC; k++){
        f();
    }
    //f();
    return 0;
}