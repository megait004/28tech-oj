#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n; 
    int arr[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Nhập hai cột cần hoán đổi
    int u, v;
    cin >> u >> v;
    u--; // Chuyển từ chỉ số 1-based sang 0-based
    v--;

    // Hoán đổi hai cột
    for (int i = 0; i < n; i++) {
        swap(arr[i][u], arr[i][v]);
    }

    for (int i = 0 ; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
