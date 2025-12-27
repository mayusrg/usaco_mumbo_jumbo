#include <bits/stdc++.h>
using namespace std;

struct Event {
    int day;
    string name;
    int change;
};

bool cmp(Event &a, Event &b) {
    return a.day < b.day;
}

int main() {
    freopen("measurement.in", "r", stdin);
    freopen("measurement.out", "w", stdout);
	int N; cin >> N;

    vector<Event> events(N);
    for (int i=0; i<N; i++) {
        cin >> events[i].day >> events[i].name >> events[i].change; //get info
    }
    sort(events.begin(), events.end(), cmp);

    map<string, int> milk;
    milk["Mildred"] = 7;
    milk["Elsie"] = 7;
    milk["Bessie"] = 7;

    string lastLeaders = "BEM"; //all start at 7
    int ans = 0;

    for (int i=0; i<N; i++) {
        milk[events[i].name] += events[i].change;
        int maxMilk = max({milk["Bessie"], milk["Elsie"], milk["Mildred"]});
        string leaders = "";
        if (milk["Bessie"] == maxMilk) leaders += "B";
        if (milk["Elsie"] == maxMilk) leaders += "E";
        if (milk["Mildred"] == maxMilk) leaders += "M";
        if (leaders != lastLeaders) ans++;
        lastLeaders = leaders; //prep for next round
    }
    cout << ans;
}
