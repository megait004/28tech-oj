#include <iostream>
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

    // Xuất ma trận theo hình con rắn
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            // Hàng chẵn: in từ trái qua phải
            for (int j = 0; j < n; j++) {
                cout << arr[i][j] << " ";
            }
        } else {
            // Hàng lẻ: in từ phải qua trái
            for (int j = n - 1; j >= 0; j--) {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
