#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    vector<int> t(n - 1);

    // Nhập giá trị mảng A[]
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Nhập giá trị mảng B[]
    for (int i = 0; i < n - 1; i++) {
        cin >> t[i];
    }

    // Khởi tạo kết quả với giá trị phần tử đầu tiên của mảng A
    int result = v[0];

    // Thực hiện các phép toán dựa trên mảng B[]
    for (int i = 0; i < n - 1; i++) {
        if (t[i] == 1) {
            result += v[i + 1];
        } else if (t[i] == 2) {
            result -= v[i + 1];
        }
    }

    // In kết quả
    cout << result;

    return 0;
}
