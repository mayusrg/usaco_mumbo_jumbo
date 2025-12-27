#include <iostream>
using namespace std;

long long solve(long long y, long long x) {
    long long layer = max(y, x);
    long long base = (layer-1)*(layer-1); //number to add
    if (layer%2==0) { //down and left to increase
        if (x==layer) { //min on the right and top
            return base+y;
        }
        else { //on the bottom of layer, add value of layer first
            return base+layer+(layer-x); //4 3: 9+4+ (1 step, which is layer-x)
        }
    }
    else {
        if (y==layer) { //min on bottom and left, right and up to increase
            return base+x;
        }
        else { //on the right and top, add layer first and increase
            return base+layer+(layer-y);
        }
    }
}

int main() {
    int t; cin >> t;
    for (int i=0; i<t; i++) {
        long long y, x; cin >> y >> x;
        cout << solve(y, x) << endl;
    }
    return 0;
}