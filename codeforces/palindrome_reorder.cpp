#include <bits/stdc++.h>
using namespace std;

int main() {
    string orig_string; cin >> orig_string;
    int n = orig_string.length();
    int frequency[26] = {0};
    for (char c : orig_string) {
        frequency[c - 'A']++;
    }
    int odd = 0;
    char oddchar;
    for (int i=0; i<26; i++) {
        if (frequency[i]%2 == 1) {
            odd++;
            oddchar = 'A' + i;
        }
    }

    if (odd>1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    
    string left = "";
    string middle = "";

    // each character is 'A' + i

    for (int i=0; i<26; i++) {
        if (frequency[i]>0) {
            left += string(frequency[i]/2, char('A' + i));
        }

    }

    if (odd == 1) {
        middle = oddchar;
    }

    string right = "";
    for (int i = left.length()-1; i>=0; i--) {
        right += left[i];
    }
    string palindrome = left + middle + right;
    cout << palindrome << endl;

}
