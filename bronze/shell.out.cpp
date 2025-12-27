#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    int a[N], b[N], g[N];
    for (int i=0; i<N; i++) {
        cin >> a[i] >> b[i] >> g[i];
    }
    int maxScore = 0;
    for (int start = 1; start <= 3; start++) {
        int ball = start; //where ball is, check each case
        int score = 0;
        for (int i=0; i<N; i++) {
            if (a[i] == ball) {
                ball = b[i];
            }
            else if (b[i] == ball) {
                ball = a[i];
            }
            if (ball == g[i]) score++;
        }
        maxScore = max(maxScore, score);
    }
    cout << maxScore;
}
