#include <iostream>
#include <algorithm>
using namespace std;

// Hàm tìm kiếm vị trí cuối cùng của phần tử có giá trị nhỏ hơn x
int lastPost(int a[], int l, int r, int x) {
    int res = -1; // Khởi tạo kết quả mặc định là -1 (nếu không tìm thấy)
    while (l <= r) { // Tiến hành tìm kiếm nhị phân
        int mid = (l + r) / 2;
        if (a[mid] < x) { // Nếu giá trị ở giữa nhỏ hơn x
            res = mid; // Cập nhật vị trí cuối cùng thỏa mãn
            l = mid + 1; // Tiếp tục tìm kiếm bên phải
        } else {
            r = mid - 1; // Tìm kiếm bên trái nếu giá trị lớn hơn hoặc bằng x
        }
    }
    return res; // Trả về vị trí cuối cùng thỏa mãn hoặc -1 nếu không tìm thấy
}

int main() {
    int n, k;
    cin >> n >> k; 
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    sort(arr, arr + n); 
    long long ans = 0; // Biến đếm tổng số lượng cặp thỏa mãn điều kiện
    for (int i = 0; i < n; i++) {
        // Tìm vị trí cuối cùng có phần tử < k - arr[i] từ vị trí i+1 trở đi
        int p = lastPost(arr, i + 1, n - 1, k - arr[i]);
        if (p != -1) { // Nếu có ít nhất một phần tử thỏa mãn
            ans += p - i; // Cộng dồn số lượng phần tử trong khoảng [i+1, p] vào ans
        }
    }
    cout << ans << endl; 
}
