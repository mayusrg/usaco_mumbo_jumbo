#include <bits/stdc++.h>
using namespace std;

//position i switch to a[i] = forward
//position 1 move to a[1] = 1, position 2 move to a[2] = 3, position 3 move to a[3] = 4, ...
//todo: move a[1]=1 to 1, pos a[2]=3 to 2, a[3]=4 to 3...
int main() {
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);
    int N; cin >> N;
    int a[N+1];
    for (int i=1; i<=N; i++) {
        cin >> a[i]; // 1 3 4 5 2, "new"
    }
    int cows[N+1];
    for (int j=1; j<=N; j++) {
        cin >> cows[j]; //get third line
    }
    //(((a[i] to i) to i) to i)
    //cow(a[i]) moves a[i] to i of cow
    for (int i=1; i<=N; i++) {
        cout << cows[a[a[a[i]]]] << "\n";
    }
}
