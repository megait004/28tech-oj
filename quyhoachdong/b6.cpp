#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9 + 7;
long long F[1000005]; // Mảng F dùng để lưu tích của các số nguyên tố từ 0 đến i.
const int maxn = (int)1e6; // Giá trị maxn là 1 triệu.
int prime[maxn + 1]; // Mảng prime để đánh dấu các số nguyên tố từ 0 đến maxn.

// Hàm "sang()" dùng để triển khai thuật toán Sàng Eratosthenes để tìm các số nguyên tố.
void sang() {
    for (int i = 0; i <= maxn; i++) {
        prime[i] = 1; // Ban đầu giả sử tất cả các số đều là số nguyên tố.
    }
    prime[0] = 0; // Số 0 không phải số nguyên tố.
    prime[1] = 0; // Số 1 không phải số nguyên tố.

    // Bắt đầu sàng từ 2 đến căn bậc hai của maxn.
    for (int i = 2; i <= sqrt(maxn); i++) {
        if (prime[i]) { // Nếu i là số nguyên tố.
            // Đánh dấu tất cả bội của i từ i*i trở đi là không phải số nguyên tố.
            for (int j = i * i; j <= maxn; j += i) {
                prime[j] = 0; // Đánh dấu j là không phải số nguyên tố.
            }
        }
    }
}

int main() {
    sang(); // Gọi hàm sàng để tìm các số nguyên tố từ 0 đến maxn.
    long long tich = 1; // Biến lưu tích các số nguyên tố.

    // Duyệt từ 2 đến 1 triệu để tính tích các số nguyên tố.
    for (int i = 2; i <= 1000000; i++) {
        if (prime[i]) {
            tich = (tich * i) % mod; // Nhân với số nguyên tố i và lấy modulo để tránh tràn số.
        }
        F[i] = tich; // Gán giá trị tích vào mảng F tại vị trí i.
    }

    int t;
    cin >> t; // Đọc số lượng test case.
    while (t--) {
        int n;
        cin >> n; // Đọc giá trị n.
        cout << F[n] << endl; // In ra tích các số nguyên tố từ 2 đến n.
    }

    return 0;
}
