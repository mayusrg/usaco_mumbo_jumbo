#include <bits/stdc++.h>
using namespace std;

string shorten(string thing) {
    return thing.front() + to_string(thing.length()-2) + thing.back();
}

int main() {
	int n; cin >> n;
    for (int i=0; i<n; i++) {
        string word; cin >> word;
        if (word.length() <= 10) {
            cout << word << endl;
        }
        else {
            cout << shorten(word) << endl;
        }
    }
}
