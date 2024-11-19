#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n; 
    int arr[n][n]; 

    // Nhập các phần tử của ma trận
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Nhập hai hàng cần hoán đổi
    int u, v;
    cin >> u >> v;
    u--; v--; // Chuyển từ chỉ số 1 về chỉ số 0

    // Hoán đổi hai hàng
    for (int i = 0; i < n; i++) {
        swap(arr[u][i], arr[v][i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
