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
const int N = 2e5;

void f(){
    string s; cin >> s;
    int sz = s.size() - 1;
    bool flag = false;
    string s1 = s, s2 = "";
    s1 += 'a'; s2 = 'a' + s;
    int sz1 = s1.size()-1, sz2 = s2.size()-1;
    for(int i=0; i<sz1; i++)
    {
        if(s1[i] != s1[sz1]){
            cout << "Yes\n";
            cout << s1;
            newl;
            return;
        }
        sz1--;
    }
    for(int i=0; i<sz2; i++)
    {
        if(s2[i] != s2[sz2]){
            cout << "Yes\n";
            cout << s2;
            newl;
            return;
        }
        sz2--;
    }
    cout << "No\n";
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int TC = 1; cin >> TC;
    for(int k = 1; k <= TC; k++){
        f();
    }
    //f();
    return 0;
}