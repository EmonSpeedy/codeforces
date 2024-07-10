#include<bits/stdc++.h>
using namespace std;
int main() {
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        int card[n];
        for(int i=0; i<n; i++) cin >> card[i];
        int count = 0;
        sort(card, card+n);
        for(int i=1; i<n; i++){
            if(card[i] == card[i-1]) count++;
        }
        cout << count << "\n";
    }
}
