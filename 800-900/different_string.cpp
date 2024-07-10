#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt; cin >> tt;
    while(tt--){
        string s; cin >> s;
        bool f = false;
        for(int i=1; i<s.size(); i++){
            if(s[i] != s[i-1]){
                f = true;
                swap(s[i],s[i-1]);
                break;
            }
        }
        if(f){
            cout << "yes\n";
            cout << s << "\n";
        }
        else cout << "no\n";
    }
}
