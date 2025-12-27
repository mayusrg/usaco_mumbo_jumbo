#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);
	int M, N, K; cin >> M >> N >> K;
    char original[M][N];
    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
            cin >> original[i][j];
        }
    }
    for (int i=0; i<M; i++) {
        for (int x=0; x<K; x++) {
            for (int j=0; j<N; j++) {
                for (int x=0; x<K; x++) {
                    cout << original[i][j];
                }
            }
        cout << "\n";
        }
    }
}