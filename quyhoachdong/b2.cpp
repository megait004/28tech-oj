#include <iostream>
using namespace std;

const int MAX_N = 1000000;
const int MOD = 1e9 + 7;

int F[MAX_N + 1]; // Mảng lưu trữ kết quả Fibonacci cho các chỉ số từ 0 đến MAX_N

void precompute_fibonacci() {
    F[0] = 0;
    F[1] = 1;
    for (int i = 2; i <= MAX_N; i++) {
        F[i] = (F[i - 1] + F[i - 2]) % MOD; // Tính và lưu Fibonacci cho từng số từ 0 đến MAX_N
    }
}

int main() {
    precompute_fibonacci(); // Tính trước tất cả các giá trị Fibonacci
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << F[n] << endl; // Trả về kết quả từ mảng F
    }
    return 0;
}
