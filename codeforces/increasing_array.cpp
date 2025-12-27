#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
    cin >> n;
    long long previous = 0;
    long long moves = 0;
    for (int i=0; i<n; i++) {
        int current;
        cin >> current;
        if (current < previous) {
            moves += (previous - current);
        }
        else {
            previous = current;
        }
    }
    cout << moves;
}
