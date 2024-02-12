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
 	ll n; cin >> n;
 	int a = 1, b = 1, c = 1, d = 1;
 	for(int i = 0; i < n; i++)
 	{
 		int x, y; cin >> x >> y;
 		if(x > 0) a = 0;
 		if(x < 0) b = 0;
 		if(y > 0) c = 0;
 		if(y < 0) d = 0;
 	}
 	if((a + b + c + d) == 0) cout << "No\n";
 	else cout << "Yes\n";
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