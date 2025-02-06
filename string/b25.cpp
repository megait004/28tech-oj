#include <bits/stdc++.h>
using namespace std;

// Hàm kiểm tra độ dài hợp lệ
bool checkLength(const string &s) {
    return s.size() == 10 || s.size() == 11;
}

// Hàm kiểm tra có bắt đầu bằng '0' không
bool startsWithZero(const string &s) {
    return s[0] == '0';
}

// Hàm kiểm tra chuỗi chỉ chứa chữ số
bool isAllDigits(const string &s) {
    return all_of(s.begin(), s.end(), ::isdigit);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        // Kiểm tra tất cả các điều kiện
        if (checkLength(s) && startsWithZero(s) && isAllDigits(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
