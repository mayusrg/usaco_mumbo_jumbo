#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);
    int N, K; cin >> N >> K;
    int current = 0;
    for (int i = 0; i < N; i++) {
        string word; cin >> word;
        int len = word.length();
        if (current > 0 && current + len > K) {
            cout << "\n";
            current = 0;
        }
        if (current > 0) cout << " ";
        cout << word;
        current += len;
    }
    cout << "\n";
}