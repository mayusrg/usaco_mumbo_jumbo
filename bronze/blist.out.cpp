#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);
	int N; cin >> N;
    int milking[1001] = {0};
    for (int i=0; i<N; i++) {
        int s, t, b; cin >> s >> t >> b;
        for (int j=s; j<t; j++) {
            milking[j] += b;
        }
    }
    int max = 0;
    for (int k=0; k<1001; k++) {
        if (milking[k] > max) max = milking[k];
    }
    cout << max;
}
