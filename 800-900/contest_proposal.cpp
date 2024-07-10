#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        int pblm[n], prsl[n];
        for(int i=0; i<n; i++) cin >> pblm[i];
        for(int i=0 ;i<n; i++) cin >> prsl[i];
        int count = 0, j=0;
        for(int i=0; i<n; i++){
            if(pblm[j] <= prsl[i]){
                j++;
            }
            else{
                count++;
            }
        }
        cout << count << "\n";
    }
}
