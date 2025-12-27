#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);
	int K, N; cin >> K >> N;
    int rank[K][N+1];
    for (int session = 0; session < K; session++) {
        for (int cow = 1; cow < N+1; cow++) {
            int theCow; cin >> theCow;
            rank[session][theCow] = cow; //stores the position of each cow
        }
    }
    int ans = 0;
    for (int a=1; a<=N; a++) {
        for (int b=1; b<=N; b++) {
            bool aWins = true;
            if (a != b) {
                for (int i=0; i<K; i++) {
                    if (rank[i][a] > rank[i][b]) {
                        aWins = false;
                        break;
                    }
                }
                if (aWins) ans++;
            }
        }
    }
    cout << ans;
}
