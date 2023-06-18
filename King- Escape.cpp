#include<bits/stdc++.h>
using namespace std;

const int N = 1010;
int maze[N][N], visited[N][N];
int dx[] = {0, -1, -1, -1, 0, 1, 1, 1};
int dy[] = {1, 1, 0, -1, -1, -1, 0, 1};
int n;
int qu1, qu2, ki1, ki2, des1, des2;

bool is_safe(int x, int y){
    if(x <= n && x > 0 && y > 0 && y <= n)
        return true;
    return false;
}

void dfs(int i, int j){
    visited[i][j] = 1;
    for(int a=0; a<8; a++){
        int new_x = i + dx[a];
        int new_y = j + dy[a];
        if(visited[new_x][new_y] == 0 && maze[new_x][new_y] != -1 && is_safe(new_x, new_y)){
            dfs(new_x, new_y);
        }
    }
}

int main() {
    
    cin >> n;

    cin >> qu1 >> qu2;
    cin >> ki1 >> ki2;
    cin >> des1 >> des2;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            maze[i][j] = 0;
    }

    for(int i=1; i<=n; i++)
        maze[qu1][i] = -1;
    for(int i=1; i<=n; i++)
        maze[i][qu2] = -1;
    
    int i, j;
    i = qu1, j = qu2;
    while (i <= n && j <= n)
    {
        maze[i][j] = -1;
        i++; j++;
    }
    i = qu1, j = qu2;
    while (i > 0 && j < n)
    {
        maze[i][j] = -1;
        i--; j++;
    }
    i = qu1, j = qu2;
    while (i < n && j > 0)
    {
        maze[i][j] = -1;
        i++; j--;
    }
    i = qu1, j = qu2;
    while (i > 0 && j > 0)
    {
        maze[i][j] = -1;
        i--; j--;
    }

    dfs(ki1, ki2);

    if(visited[des1][des2] == 1){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

    return 0;
}