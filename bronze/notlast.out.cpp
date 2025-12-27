#include <bits/stdc++.h>
using namespace std;


int main() {
    freopen("notlast.in", "r", stdin);
    freopen("notlast.out", "w", stdout);
	int N; cin >> N;
    map<string, int> milk;
    vector<string> cows = {"Bessie", "Elsie", "Daisy", "Gertie", "Annabelle", "Maggie", "Henrietta"};
    for (string c:cows) milk[c] = 0;
    for (int i=0; i<N; i++) {
        string name; int prod; cin >> name >> prod;
        milk[name] += prod;
    }
    set<int> milkVal;
    for (string cow:cows) milkVal.insert(milk[cow]); //string is the index
    vector<int> vals(milkVal.begin(), milkVal.end());
    if (vals.size() < 2) {
        cout << "Tie";
        return 0;
    }
    int secondMin = vals[1];
    //number cows w secondMin as a value?
    string ans;
    int count = 0;
    for (string x:cows) {
        if (milk[x] == secondMin) {
            count++;
            ans = x;
        }
    }
    if (count == 1) cout << ans;
    else cout << "Tie";
}


//Bessie, Elsie, Daisy, Gertie, Annabelle, Maggie, and Henrietta
// took so long cos of the sets and whatever