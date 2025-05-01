#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    map<string, int> matchCount;
    string line;
    while (getline(cin, line)) {
        size_t dash = line.find(" - ");
        string team1 = line.substr(0, dash);
        string team2 = line.substr(dash + 3);
        matchCount[team1]++;
        matchCount[team2]++;
    }

    vector<pair<string, int>> result(matchCount.begin(), matchCount.end());

    sort(result.begin(), result.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        if (a.second != b.second) return a.second > b.second;
        return a.first < b.first;
    });
    for (const auto& entry : result) {
        cout << entry.first << " " << entry.second << endl;
    }

    return 0;
}

