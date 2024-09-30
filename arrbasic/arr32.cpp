#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Nhập số lượng phần tử trong mảng (vector)
    int n; 
    cin >> n;

    // Nhập số lần xoay vòng
    int k; 
    cin >> k;

    // Khai báo một vector có kích thước n để lưu các phần tử
    vector<int> v(n);

    // Nhập giá trị cho từng phần tử của vector
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Tính số lần xoay thực sự cần thiết
    // Nếu k lớn hơn n, chỉ cần xoay k % n lần là đủ
    int turn = k % n;

    // In ra các phần tử của vector sau khi xoay vòng
    for (int i = 0; i < n; i++) {
        // Sử dụng (i + turn) % n để tìm ra chỉ số mới của phần tử sau khi xoay
        cout << v[(i + turn) % n] << " "; 
    }

    return 0;
}
