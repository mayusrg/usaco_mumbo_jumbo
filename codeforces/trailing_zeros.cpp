#include <bits/stdc++.h>
using namespace std;

int main() {
	long n, current=5, answer=0; cin >> n;
    //find number of 5s in prime factorization
    while (current <= n) {
        answer += n/current;
        current *= 5;
    }
    cout << answer;
}
