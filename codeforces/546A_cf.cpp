#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, n, w; cin >> k >> n >> w;
	int sum_w = (w+1)*w/2;
    int money = k*sum_w;
    if (money > n) cout << money-n << endl;
    else cout << 0 << endl;
}
