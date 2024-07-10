/*
	In the name of Allah
	author :: md sh emon
*/
#include "bits/stdc++.h"
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
#define ll long long

void func() {
    int a, b, c; cin >> a >> b >> c;
    int sum = a + b + c;
    if(sum % 2 != 0){
        cout << "-1\n";
        return;
    }
    int ans1, ans2;
    ans1 = (a+b+c)/2;
    ans2 = (a+b);
    cout << min(ans1, ans2) << "\n";
}

int32_t main() {
	fastIO;
	int tc; cin >> tc;
	while (tc--) {
		func();
	}
}