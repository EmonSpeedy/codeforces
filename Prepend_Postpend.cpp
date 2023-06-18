#include<bits/stdc++.h>
using namespace std;

void Solve(){
    int size;
    cin>>size;
    string s; cin>>s;
    deque<char> d;
    for(auto k : s){
        d.push_back(k);
    }
    while(d.size()){
        if(d.front() == '1' && d.back() == '0' || d.front() == '0' && d.back() == '1'){
            d.pop_front();
            d.pop_back();
        }
        else
        {
             cout<<d.size()<<"\n";
             return;
        }  
    }
    cout<<0<<'\n';
    return;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        Solve();
    }
   
    return 0;
}

