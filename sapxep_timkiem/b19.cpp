#include <iostream>
#include <algorithm>
using namespace std;

// Hàm tìm kiếm vị trí đầu tiên của phần tử có giá trị lớn hơn x trong đoạn [l, r]
int firstPos(int a[], int l, int r, int x) {
    int res = -1;
    while (l <= r) { // Sử dụng tìm kiếm nhị phân để tìm vị trí
        int mid = (l + r) / 2;
        if (a[mid] > x) { // Nếu giá trị tại mid lớn hơn x
            res = mid; // Cập nhật kết quả với vị trí mid
            r = mid - 1; // Tiếp tục tìm kiếm bên trái để tìm vị trí đầu tiên
        } else {
            l = mid + 1; // Tìm kiếm bên phải nếu giá trị tại mid không lớn hơn x
        }
    }
    return res; // Trả về vị trí đầu tiên thỏa mãn hoặc -1 nếu không có phần tử nào lớn hơn x
}

int main() {
    int n, k;
    cin >> n >> k; 
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    }
    sort(a, a + n); // Sắp xếp mảng theo thứ tự tăng dần
    long long ans = 0; // Biến đếm tổng số lượng cặp thỏa mãn điều kiện
    for (int i = 0; i < n; i++) {
        // Tìm vị trí đầu tiên có phần tử > k - a[i] từ vị trí i+1 trở đi
        int p = firstPos(a, i + 1, n - 1, k - a[i]);
        if (p != -1) { // Nếu có ít nhất một phần tử thỏa mãn
            ans += n - p; // Tính số lượng phần tử từ vị trí p đến n-1 (số lượng phần tử lớn hơn k - a[i])
        }
    }
    cout << ans << endl; 
    return 0;
}
