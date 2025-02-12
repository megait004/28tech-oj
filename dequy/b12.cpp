#include <bits/stdc++.h>
using namespace std;

char toHexChar(int digit) {
    if (digit < 10) return '0' + digit;  // Chữ số từ 0-9
    return 'A' + (digit - 10);           // Chữ số từ A-F
}

string toHex(long long n) {
    if (n < 16) return string(1, toHexChar(n));  // Điều kiện dừng
    return toHex(n / 16) + toHexChar(n % 16);    // Đệ quy + ghép kết quả
}

int main() {
    long long n;
    cin >> n;
    cout << toHex(n) << endl;
    return 0;
}
