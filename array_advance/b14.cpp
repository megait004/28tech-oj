#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

// Hàm kiểm tra xem số có phải là số không giảm không
bool isNonDecreasing(int n) {
    int lastDigit = n % 10;
    n /= 10;
    while (n > 0) {
        int currentDigit = n % 10;
        if (currentDigit > lastDigit) return false; // Nếu chữ số hiện tại lớn hơn chữ số sau nó -> không phải không giảm
        lastDigit = currentDigit;
        n /= 10;
    }
    return true;
}

int main() {
    int n;
    map<int, int> mp;

    // Đọc từng số và kiểm tra nếu là số không giảm thì tăng số lần xuất hiện
    while (cin >> n) {
        if (isNonDecreasing(n)) {
            mp[n]++;
        }
    }

    // Chuyển map thành vector để sắp xếp
    vector<pair<int, int>> result(mp.begin(), mp.end());

    // Sắp xếp theo yêu cầu
    sort(result.begin(), result.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return (a.second > b.second) || (a.second == b.second && a.first < b.first);
    });

    for (const auto& p : result) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
