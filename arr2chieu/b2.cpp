#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    // Khai báo ma trận kiểu long long để tránh tràn số
    long long arr[n][m];

    // Nhập các phần tử của ma trận
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    // Tính tổng từng hàng
    for(int i = 0; i < n; i++) {
        long long sum1 = 0;
        for(int j = 0; j < m; j++) {
            sum1 += arr[i][j];
        }
        cout << sum1 << " ";
    }
    cout << endl;

    // Tính tổng từng cột
    for(int j = 0; j < m; j++) {
        long long sum2 = 0;
        for(int i = 0; i < n; i++) {
            sum2 += arr[i][j];
        }
        cout << sum2 << " ";
    }

    return 0;
}
