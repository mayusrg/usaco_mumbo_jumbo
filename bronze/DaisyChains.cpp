// USACO 2020 December Contest, Bronze Problem 2. Daisy Chains

#include <bits/stdc++.h>
using namespace std;

int main() {
	int N; cin >> N;
    int p[N];
    int ans = 0;
    for (int i=0; i<N; i++) {
        cin >> p[i];
    }
    for (int i=0; i<N; i++) {
        for (int j=i; j<N; j++) {
            int sum = 0;
            for (int x=i; x<=j; x++) {
                sum += p[x];
            }
            double avg = (double)sum / (j-i+1);
            for (int x=i; x<=j; x++) {
                if (p[x] == avg) {
                    ans++;
                    break;
                }
            }
        }
    }
    cout << ans;
}

// i wish i did this in O(N^2) time and i am certain there is such a solution lol
