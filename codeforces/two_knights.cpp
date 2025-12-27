#include <iostream>
using namespace std;
long solve(int k) {
    long totalWays = ((long)(k*k)*(k*k-1)/2);
    long attack = 4*(k-1)*(k-2);
    long ans = totalWays - attack;
    return ans;
}

int main() {
	int k; cin >> k;
    for (int i=1; i<k+1; i++) {
        cout << solve(i) << endl;
    }
    return 0;
}