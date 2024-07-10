#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt; cin >> tt;
    while(tt--){
        int a,b,c,d,mx,mn, clock[13];
        for(int i=0; i<13; i++) clock[i] = 0;
        cin>>a>>b>>c>>d;
        mn = min(a,b);
        mx = max(a,b);
        bool f = false;
        for(int i=mn; i<=mx; i++){
            clock[i] = 1;
        }
        if(clock[c] == 1 and clock[d] == 0) f = true;
        if(clock[c] == 0 and clock[d] == 1) f = true;
        
        if(f) cout << "yes\n";
        else cout << "no\n";
    }
}
