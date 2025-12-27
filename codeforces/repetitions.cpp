#include <bits/stdc++.h>
using namespace std;

int main() {
	string dna;
    cin >> dna;
    int currentLength = 1;
    int maxLength = 1;
    for (int i=1; i<dna.length(); i++) {
        if (dna[i] == dna[i-1]) {
            currentLength ++;
            maxLength = max(maxLength, currentLength);
        }
        else {
            maxLength = max(maxLength, currentLength);
            currentLength = 1;
        }
    }
    cout << maxLength;
}
