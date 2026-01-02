#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("herding.in", "r", stdin);
    freopen("herding.out", "w", stdout);
    int min, maxM;
    int thing[3];
    cin >> thing[0] >> thing[1] >> thing[2];
    sort(thing, thing+3);
    int g1 = thing[1]-thing[0]-1; int g2 = thing[2]-thing[1]-1;
    if (g1==0 && g2==0) {
        min = 0; maxM = 0;
    }
    else {
        if (g1==1 || g2==1) {
            min = 1;
        }
        else {
            min = 2;
        }
        maxM = max(g1, g2);
    }
    cout << min << "\n" << maxM;
}
