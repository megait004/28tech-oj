#include<iostream>
using namespace std;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {
    int n, m; 
    cin >> n >> m; 

    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j]; 
        }
    }

    int ans = 0;

    // Duyệt qua tất cả các ô trong ma trận
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            bool ok = true; // Giả sử ô (i, j) là cực đại
            for (int k = 0; k < 8; k++) {
                int i1 = i + dx[k], j1 = j + dy[k];
                // Kiểm tra biên
                if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m) {
                    if (arr[i1][j1] >= arr[i][j]) {
                        ok = false; // Không phải cực đại
                        break;
                    }
                }
            }
            if (ok) ++ans; // Nếu ô (i, j) là cực đại, tăng biến đếm
        }
    }

    cout << ans; 
}
