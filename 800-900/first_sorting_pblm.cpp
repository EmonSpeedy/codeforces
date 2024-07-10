#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt; cin >> tt;
    while(tt--){
        int n1, n2; cin >> n1 >> n2;
        if(n1 > n2){
            cout << n2 << " " << n1 << "\n";
        }
        else{
            cout << n1 << " " << n2 << "\n";
        }
    }
}
