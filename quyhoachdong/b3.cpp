#include<iostream>
using namespace std;

const int maxn = 1000000; // Định nghĩa kích thước tối đa cho mảng F
long long F[maxn + 1];    // Mảng lưu các giá trị Tribonacci từ 0 đến maxn
long long mod = 1e9 + 7;  // Hằng số mod để giữ kết quả trong giới hạn

void tribo() {
    // Khởi tạo các giá trị ban đầu của chuỗi Tribonacci
    F[0] = 0;
    F[1] = 0;
    F[2] = 1;
    for (int i = 3; i <= maxn; i++) {
        // Tính F[i] bằng tổng của F[i-1], F[i-2], F[i-3] và chia dư với mod
        F[i] = (F[i - 1] + F[i - 2] + F[i - 3]) % mod;
    }
}

int main() {
    tribo(); // Tính trước các giá trị Tribonacci
    int t;
    cin >> t; // Đọc vào số bộ test
    while (t--) {
        long long n;
        cin >> n;          
        cout << F[n] << endl; 
    }
    return 0;
}
