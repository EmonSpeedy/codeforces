#include<bits/stdc++.h>
using namespace std;

const int N = 1001, M = 1001;
int inp[N][M];
bool visited[N][M];
int t, n, m;
int dx[] = {0, -1, 0, 1};
int dy[] = {1, 0, -1, 0};
int cnt = 0;

bool is_safe(int i, int j){
    if(i >= 0 && i < n && j >= 0 && j < m){
        return true;
    }
    return false;
}

void dfs(int i, int j){
    visited[i][j] = 1;
    cnt = cnt + inp[i][j];
    for(int k=0; k<4; k++){
        int new_i = i + dx[k];
        int new_j = j + dy[k];
        if(!visited[new_i][new_j] && inp[new_i][new_j] != 0 && is_safe(new_i, new_j)){
            dfs(new_i, new_j);
        }
    }
    return;
}

int main() {
    cin >> t;
    while(t--) {
        cin >> n >> m;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> inp[i][j];
                visited[i][j] = false;
            }
        }
        
        int mx = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(! visited[i][j] && inp[i][j] != 0 && is_safe(i, j)){
                    dfs(i, j);
                    mx = max(cnt, mx);
                    cnt = 0;
                }
            }
        }
        cout<<mx<<"\n";
    }

    return 0;
}