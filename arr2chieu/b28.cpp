#include<iostream>
#include<cmath>
using namespace std;

// Các mảng dx, dy biểu diễn 8 hướng di chuyển lân cận (trái, phải, trên, dưới, và 4 đường chéo)
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {
    int n;
    cin >> n; // Nhập kích thước ma trận

    int arr[n][n]; // Khởi tạo ma trận n x n
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j]; // Nhập giá trị từng ô trong ma trận
        }
    }

    int ans = 0; // Biến lưu tổng lớn nhất tìm được

    // Duyệt qua các ô trong ma trận (trừ viền ngoài)
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            int tong = arr[i][j]; // Bắt đầu với ô trung tâm
            for (int k = 0; k < 8; k++) { // Xét 8 ô lân cận
                int i1 = i + dx[k], j1 = j + dy[k];
                tong += arr[i1][j1]; // Cộng giá trị của ô lân cận
            }
            ans = max(ans, tong); // Cập nhật tổng lớn nhất nếu cần
        }
    }

    cout << ans; // Xuất kết quả tổng lớn nhất
}
