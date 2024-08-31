#include <iostream>
#include <cmath>

using namespace std;

int main() {
    unsigned long long N, M, K;
    cin >> N >> M >> K;

    // Tính giá trị 10^K
    unsigned long long mod = pow(10, K);

    // Tính N^M % 10^K sử dụng lũy thừa nhanh
    unsigned long long result = 1;
    N = N % mod; // Đưa N về giá trị nhỏ hơn 10^K

    while (M > 0) {
        if (M % 2 == 1) {
            result = (result * N) % mod;
        }
        M = M / 2;
        N = (N * N) % mod;
    }

    // In ra kết quả, đảm bảo đủ K chữ số
    cout << result << endl;

    return 0;
}
