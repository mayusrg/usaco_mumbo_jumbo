// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);
	int covered[2001][2001] = {0};
    int ans = 0;
    for (int i=0; i<2; i++) {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        for (int j=x1+1000; j<x2+1000; j++) {
            for (int k=y1+1000; k<y2+1000; k++) {
                covered[j][k] = 1;
            }
        }
    }
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    for (int j=x1+1000; j<x2+1000; j++) {
        for (int k=y1+1000; k<y2+1000; k++) {
            covered[j][k] = 0;
        }
    }
    for (int i=0; i<2001; i++) {
        for (int j=0; j<2001; j++) {
            ans += covered[i][j];
        }
    }
    cout << ans;
}
