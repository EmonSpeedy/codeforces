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
    string s; cin >> s;
    bool flag = false;
    string s1, s2;
    s1 += s[0];
    for(int i=1; i<s.size(); i++)
    {
        if(s[i] != '0' || flag){
            s2 += s[i];
            flag = true;
        }
        else s1 += s[i];
    }
    if(s2.size() == 0) s2 += '0';
    int n1 = stoi(s1); int n2 = stoi(s2);
    if(n1!=n2 && n1<n2){
        cout<<n1<<" "<<n2<<'\n';
    }
    else{
        cout <<-1<<"\n";
    }
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