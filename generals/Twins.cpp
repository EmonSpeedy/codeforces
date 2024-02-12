#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0; 
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    int coins = 0; int cnt = 0;
    for(int i = 0; i < n; i++){
        coins += a[i]; cnt++;

        if(coins > (sum - coins)){
            break;
        }

    }
    cout << cnt << "\n";


    return 0;
}