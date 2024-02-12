/*
	In the name of Allah
    author : md sh emon
*/
#include "bits/stdc++.h"
using namespace std;

#define w while

int sum(int n) {
	int s = 0;
	w(n != 0)
	{
		s += (n % 10);
		n /= 10;
	}
	return s;
}

void f() {
    int n, k; cin >> n >> k;
    w(sum(n) % k != 0) 
    {
    	n++;
    }
    cout << n << "\n";
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int TC = 1; cin >> TC;
    for(int k = 1; k <= TC; k++){
        f();
    }
    // f();
}