#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);
	int N; cin >> N;
    int a[N], b[N]; 
    for (int i=0; i<N; i++) {
        cin >> a[i] >> b[i];
    }
    int maxMin = 0;
    for (int skip=0; skip<N; skip++) {
        int covered[1001] = {0};
        int totalCovered = 0;
        for (int i=0; i<N; i++) {
            if (i!=skip) {
                for (int k=a[i]; k<b[i]; k++) {
                    covered[k] = 1;
                }
            }
        }
        for (int j=0; j<1001; j++) {
            totalCovered += covered[j];
        }
        if (totalCovered > maxMin) maxMin = totalCovered;
    }
    cout << maxMin;
}
