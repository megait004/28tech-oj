#include <iostream>
using namespace std;

int mod = 1e9 + 7; // Đặt giá trị modulo để tránh tràn số
long long F[1000005]; // Mảng lưu giai thừa của các số từ 0 đến 1 triệu

int main() {
    F[0] = 1; // Giai thừa của 0 là 1
    // Tính giai thừa cho các số từ 1 đến 1 triệu
    for (int i = 1; i <= 1000000; i++) {
        F[i] = i * F[i - 1]; // Giai thừa của i bằng i nhân với giai thừa của (i-1)
        F[i] %= mod; // Lấy modulo để tránh tràn số
    }

    int t;
    cin >> t; // Nhập số lượng bộ test
    while (t--) {
        int n;
        cin >> n; // Nhập giá trị cần tính giai thừa
        cout << F[n] << endl; 
    }

    return 0;
}
