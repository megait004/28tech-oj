#include <iostream>
using namespace std;

const int MOD = 1000000007;
const int MAX_N = 1000005;
// khởi tạo mảng lớn để lưu trữ giá trị cho Fn
long long F[MAX_N];

int main() {
    // Khởi tạo giá trị ban đầu
    F[1] = 2;
    F[2] = 8;

    // Tính toán các giá trị F[n] với n >= 3
    for (int i = 3; i < MAX_N; ++i) {
        F[i] = (2 * F[i - 1] + 8 * F[i - 2]) % MOD;
    }

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << F[n] << endl;
    }

    return 0;
}
