#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n; // Đọc số lượng phần tử của mảng
    vector<int> v(n);

    // Nhập các phần tử của mảng
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    long long totalSum = 0; // Biến lưu tổng của tất cả các dãy con

    // Duyệt qua tất cả các dãy con
    for (int i = 0; i < n; i++) {
        long long currentSum = 0; // Tổng của dãy con bắt đầu từ v[i]
        for (int j = i; j < n; j++) {
            currentSum += v[j]; // Cộng giá trị v[j] vào tổng của dãy con hiện tại
            cout << currentSum << " ";
        }
    }
    return 0;
}
