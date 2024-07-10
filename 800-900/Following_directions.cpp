#include <bits/stdc++.h>
using namespace std;

void Solve(){
    int length; string s;
    cin>>length;
    cin>>s;
    int x=0, y=0;
    for(int k=0; k<s.size(); k++){
        if(s[k] == 'U'){
            x+=1;
        }
        else if(s[k] == 'D'){
            x-=1;
        }
        else if(s[k] == 'R'){
            y+=1;
        }
        else
            y-=1;

        if(x == 1 && y == 1){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        Solve();
    }

    return 0;
}