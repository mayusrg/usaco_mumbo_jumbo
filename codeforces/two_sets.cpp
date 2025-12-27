#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main() {
	int n; cin >> n;
    if (n%4!=0 && n%4!=3) {
        cout << "NO" << endl;
        return 0;
    }

    vector<int> larger, smaller;

    if (n%4==3) {
        larger.push_back(1);
        larger.push_back(2);
        smaller.push_back(3);
        for (int i=4; i<=n; i+=4) {
            //4: 1, 2, 4, 7; 3: 3, 5, 6, so i, i+3 and i+1, i+2
            larger.push_back(i);
            if (i+3 <= n) larger.push_back(i+3);
            if (i+1 <= n) smaller.push_back(i+1);
            if (i+2 <= n) smaller.push_back(i+2);
        }
    } else {
        for (int i=1; i<=n; i+=4) {
            larger.push_back(i);
            if (i+3 <= n) larger.push_back(i+3);
            if (i+1 <= n) smaller.push_back(i+1);
            if (i+2 <= n) smaller.push_back(i+2);
        }
    }
    cout << "YES" << endl;

    cout << larger.size() << endl;
    for (int i=0; i < larger.size(); i++) {
        cout << larger[i];
        if (i < larger.size()-1) cout << " ";
    }
    cout << endl;
    cout << smaller.size() << endl;
    for (int i=0; i < smaller.size(); i++) {
        cout << smaller[i];
        if (i < smaller.size()-1) cout << " ";
    }
    cout << endl;
    return 0;
}
