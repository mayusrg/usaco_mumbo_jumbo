#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	int n;
    cin >> n;
    vector<int> numbers;
    if (n==1) cout << 1;
    else if (n==2 || n==3) cout << "NO SOLUTION";
    else {
        if (n%2==0) {
            for (int i=2; i<=n; i+=2) {
                numbers.push_back(i);
            }
            for (int i=1; i<=n; i+=2) {
                numbers.push_back(i);
            }
        }
        else {
            for (int i=n-1; i>0; i-=2) {
                numbers.push_back(i);
            }
            for (int i=n; i>0; i-=2) {
                numbers.push_back(i);
            }
        }
        for (int i=0; i<n; i++) {
            cout << numbers[i];
            if (i<n-1) cout << " ";
        }
    }
}
