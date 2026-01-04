// USACO 2021 December Contest, Bronze Problem 2. Air Cownditioning

#include <bits/stdc++.h>
using namespace std;

int main() {
	int N; cin >> N;
    int p[N]; int t[N]; int d[N+1];
    for (int i=0; i<N; i++) {
        cin >> p[i];
    }
    for (int i=0; i<N; i++) {
        cin >> t[i];
    }
    for (int i=0; i<N; i++) {
        d[i] = p[i] - t[i];
    }
    int ans = abs(d[0]);
    d[N]=0;
    for (int i=0; i<N; i++) {
        ans += abs(d[i]-d[i+1]);
    }
    cout << ans/2;
}
