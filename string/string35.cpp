#include <bits/stdc++.h>
using namespace std;

bool check(string &s) {
    // Kiểm tra số cuối cùng có chia hết cho 2 không
    if ((s.back() - '0') % 2 != 0) {
        return false;
    }

    // Tính tổng các chữ số
    int sum = 0;
    for (char c : s) {
        sum += (c - '0');
    }

    // Kiểm tra tổng có chia hết cho 3 không
    return (sum % 3 == 0);
}

int main() {
    string s;
    cin >> s;
    cout << (check(s) ? "YES" : "NO");
    return 0;
}
