#include <bits/stdc++.h>
using namespace std;

int main() {
	long long N, K; cin >> N >> K;
    long long days[N];
    long long cost = N+K;
    for (int i=0; i<N; i++) {
        cin >> days[i];
    }
    for (int i=1; i<N; i++) {
        long long gap = days[i]-days[i-1]-1;
        cost += min(K, gap);
    }
    cout << cost;
}

/*

USACO 2023 February Contest, Bronze
Problem 3. Watching Mooloo

d + K for d consecutive days, which is day 2 - day 1 - 1
cost = N+K for number of days already + K
then fill in the blanks (gaps)
add gap or K (because each "point" has been accounted for)

*/
