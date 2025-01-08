#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    string tmp;
    map<string, int> mp;

    // Đếm số lần xuất hiện của mỗi từ
    while (ss >> tmp) {
        mp[tmp]++;
    }

    // Biến lưu từ có số lần xuất hiện lớn nhất và nhỏ nhất
    string maxWord, minWord;
    int maxCount = -1, minCount = INT_MAX;

    for (auto it : mp) {
        if (it.second > maxCount || (it.second == maxCount && it.first > maxWord)) {
            maxCount = it.second;
            maxWord = it.first;
        }
        if (it.second < minCount || (it.second == minCount && it.first > minWord)) {
            minCount = it.second;
            minWord = it.first;
        }
    }
    cout << maxWord << " " << maxCount << endl;
    cout << minWord << " " << minCount;

    return 0;
}
