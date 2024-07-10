#include<bits/stdc++.h>
using namespace std;
int main() {
    int tt; cin >> tt;
    while(tt--){
        int n,m; cin >> n >> m;
        char mat[n][m];
        int hashs = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> mat[i][j];
                if(mat[i][j] == '#') hashs++;
            }
        }
        
        hashs = (hashs/2)+1; 
        
        int hash_pass = 0, row, col;
        bool f = false;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j] == '#') hash_pass++;
                
                if(hash_pass == hashs){
                    row = i; col = j;
                    f = true;
                    break;
                }
            }
            if(f) break;
        }
        cout << row+1 << " " << col+1 << "\n";
    }
    
}
 
