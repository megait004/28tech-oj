#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Mảng di chuyển 4 hướng: lên, trái, phải, xuống
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int n, m, a[100][100];

void nhap() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
}

// Hàm "loang" để đánh dấu các ô thuộc cùng một miền
void loang(int i, int j) {
    a[i][j] = 0; // Đánh dấu ô hiện tại là đã thăm
    for (int k = 0; k < 8; k++) {
        int i1 = i + dx[k], j1 = j + dy[k];
        // Kiểm tra điều kiện hợp lệ và giá trị của ô
        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 1) {
            loang(i1, j1);
        }
    }
}

int main() {
    nhap();
    int dem = 0;
    // Duyệt qua tất cả các ô trong ma trận
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 1) {
                dem++; // Đếm thêm một miền mới
                loang(i, j); // Đánh dấu toàn bộ miền
            }
        }
    }
    cout << dem << endl; 
}
