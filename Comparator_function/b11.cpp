#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// Hàm tìm vị trí đầu tiên của phần tử x trong mảng v
int firstPosition(vector<int> &v, int l, int r, int x) {
    int ans = -1; // Khởi tạo giá trị trả về mặc định là -1 (không tìm thấy)
    while (l <= r) { 
        int m = (l + r) / 2; // Tính chỉ số giữa mảng
        if (v[m] == x) {
            ans = m;  // Ghi nhận vị trí nếu tìm thấy
            r = m - 1; // Tiếp tục tìm kiếm ở phía bên trái để tìm vị trí đầu tiên
        } 
        else if (v[m] < x) {
            l = m + 1; // Nếu phần tử giữa nhỏ hơn x, tìm tiếp ở phía bên phải
        } 
        else {
            r = m - 1; // Nếu phần tử giữa lớn hơn x, tìm tiếp ở phía bên trái
        }
    }
    return ans; // Trả về vị trí đầu tiên tìm thấy, hoặc -1 nếu không tìm thấy
}

int main() {
    int n, x;
    cin >> n >> x; // Nhập số phần tử n và giá trị cần tìm x
    vector<int> v(n); // Khởi tạo vector chứa n phần tử
    for (int i = 0; i < n; i++) {
        cin >> v[i]; // Nhập từng phần tử của vector
    }

    sort(v.begin(), v.end()); // Sắp xếp mảng theo thứ tự tăng dần

    cout << firstPosition(v, 0, n - 1, x); // Gọi hàm tìm vị trí đầu tiên của x trong mảng

    return 0;
}
