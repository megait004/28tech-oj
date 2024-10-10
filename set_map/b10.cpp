#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main() {
    int n, m; 
    cin >> n >> m; // Nhập hai số n và m, lần lượt là số phần tử của hai vector.

    vector<int> v(n);  // Khởi tạo vector `v` có `n` phần tử.
    vector<int> v2(m); // Khởi tạo vector `v2` có `m` phần tử.
    map<int, int> mp;  // Khởi tạo một map `mp` để lưu trữ các giá trị và trạng thái của chúng.

    // Nhập các phần tử cho vector `v`.
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Nhập các phần tử cho vector `v2`.
    for (int i = 0; i < m; i++) {
        cin >> v2[i];
    }

    // Đánh dấu các phần tử có trong `v` bằng giá trị 1 trong map `mp`.
    for (int x : v) {
        mp[x] = 1;
    }

    // Kiểm tra các phần tử trong `v2`, nếu chúng đã có trong map (có giá trị là 1), 
    // đổi giá trị thành 2 để chỉ ra rằng chúng xuất hiện ở cả hai vector.
    for (int x : v2) {
        if (mp[x] == 1) {
            mp[x] = 2;
        }
    }

    // Duyệt qua vector `v`, nếu phần tử có giá trị 2 trong map (xuất hiện ở cả hai vector),
    // in ra phần tử đó và sau đó đặt giá trị của nó về 0 để không in lặp lại.
    for (int x : v) {
        if (mp[x] == 2) {
            cout << x << " ";
            mp[x] = 0;
        }
    }

    return 0;
}
