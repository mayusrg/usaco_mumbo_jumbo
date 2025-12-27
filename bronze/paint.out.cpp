#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
	int a, b, c, d; cin >> a >> b >> c >> d;
    int thing[101] = {0};
    int ans = 0;
    for (int i=a; i<b; i++) {
        thing[i] = 1;
    }
    for (int i=c; i<d; i++) {
        thing[i] = 1;
    }
    for (int i=0; i<=100; i++) {
        ans += thing[i];
    }
    cout << ans;
}
