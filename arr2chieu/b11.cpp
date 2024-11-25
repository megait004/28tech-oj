#include <iostream>
#include <algorithm> // Để sử dụng hàm sort
using namespace std;

int main() {
    int N;
    cin >> N;
    int matrix[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }
    // Sắp xếp từng hàng
    for (int i = 0; i < N; i++) {
        sort(matrix[i], matrix[i] + N); // Sắp xếp hàng thứ i
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
