#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
    cin >> n;
    long long m = 0;
    for (int i=0; i<n-1; i++) {
        long long x;
        cin >> x;
        m += x;
    }
    long long target = (n*(n+1))/2;
    cout << target - m;
}
