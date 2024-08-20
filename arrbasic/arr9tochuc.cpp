#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);

    // Nhập mảng
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Tìm các phần tử thỏa mãn điều kiện
    vector<int> result;
    int max_right = A[N-1];
    result.push_back(max_right);

    for (int i = N - 2; i >= 0; i--) {
        if (A[i] > max_right) {
            result.push_back(A[i]);
            max_right = A[i];
        }
    }

    // In kết quả theo thứ tự xuất hiện
    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i] << " ";
    }

    return 0;
}
