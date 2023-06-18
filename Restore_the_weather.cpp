#include <bits/stdc++.h>
using namespace std;

int main(){
    int tests; 
    cin >> tests;
    while(tests--)
    {
        int n, k;
        cin >> n >> k; vector<int> a(n), b(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];

        vector<pair<int, int>>p;

        for(int i = 0; i < n; i++){
            int val = a[i]; int index = i;
            p.push_back({val, index});
        }

        sort(p.begin(), p.end());

        sort(b.begin(), b.end());
        vector<int> ans(n);

        for(int i = 0; i < n; i++){
            int val = b[i]; int index = p[i].second;
            ans[index] = val;
        }

        for(int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << "\n";

    }

}