#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long chuSoDauTien = n; 
    while (chuSoDauTien >= 10) {
        chuSoDauTien /= 10;  // Tách lấy chữ số đầu tiên
    }

    long long max = -1;
    long long tmp = n;

    // Kiểm tra tất cả các chữ số ngoại trừ chữ số đầu tiên
    while (tmp >= 10) {
        long long dv = tmp % 10;
        if (dv > max) {
            max = dv;
        }
        tmp /= 10;
    }

    if (chuSoDauTien >= max) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
