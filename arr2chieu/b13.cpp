#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n, m, p;
    cin >> n >> m >> p;  // Nhập kích thước ma trận A (n x m) và ma trận B (m x p)

    int a[n][m];  // Ma trận A kích thước n x m
    int b[m][p];  // Ma trận B kích thước m x p
    long long c[n][p];  // Ma trận kết quả C, có kích thước n x p. Dùng long long để tránh tràn số

    // Nhập ma trận A
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];  // Nhập phần tử a[i][j] của ma trận A
        }
    }

    // Nhập ma trận B
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cin >> b[i][j];  // Nhập phần tử b[i][j] của ma trận B
        }
    }

    // Tính ma trận tích C = A * B
    for (int i = 0; i < n; i++) {  // Duyệt qua các dòng của ma trận C
        for (int j = 0; j < p; j++) {  // Duyệt qua các cột của ma trận C
            c[i][j] = 0;  // Khởi tạo giá trị ban đầu của c[i][j]
            for (int k = 0; k < m; k++) {  // Duyệt qua các phần tử của dòng i ở A và cột j ở B
                c[i][j] += (long long)a[i][k] * (long long)b[k][j];  // Cộng tích vào phần tử c[i][j]
            }
            cout << c[i][j] << " ";  
        }
        cout << endl;  
    }

    return 0;
}
