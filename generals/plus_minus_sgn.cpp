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
    string s; cin >> s;
    string ans = "";
    int sum = 0; sum += s[0] - 48;
    for(int i=1; i<s.size(); i++)
    {
    	if(sum > 0){
    		sum -= (s[i]-48);
    		ans += '-';
    	}
    	else{
    		sum += (s[i]-48);
    		ans += '+';
    	}
    }
    cout<<ans;
    newl;
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