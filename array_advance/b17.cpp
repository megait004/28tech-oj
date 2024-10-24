#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    long long arr[n + 1]; // Kích thước n + 1
    long long prefix[n + 1]; // Kích thước n + 1

    // Nhập dãy số A
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    // Tính mảng cộng dồn
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    // Xử lý các truy vấn
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << endl; // Tính tổng từ l đến r
    }

    return 0;
}