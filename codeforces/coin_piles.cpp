#include <bits/stdc++.h>
using namespace std;
#define x (2*b-a)
#define y (2*a-b)

string check(int a, int b) {
    if (x%3 || y%3 || x<0 || y<0) {
        return "NO";
    }
    else return "YES";
}

int main() {
    int t; cin >> t;
    for (int i=0; i<t; i++) {
        int a, b; cin >> a >> b;
        cout << check(a, b) << endl;
    }
}
