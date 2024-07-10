//
// Created by vengeance on 3/2/24.
//
#include "bits/stdc++.h"
using namespace std;
int main() {
    int tt; cin >> tt;
    while (tt--){
        int n, answer = 0; cin >> n;
        vector<int> a(n);
        for(auto &i : a) cin>>i;
        sort(a.begin(), a.end());
        answer += abs(a[0]-a[n-1]);
        answer += abs(a[1]-a[n-1]);
        answer += abs(a[1]-a[n-2]);
        answer += abs(a[n-2]-a[0]);
        cout << answer << "\n";
    }
}