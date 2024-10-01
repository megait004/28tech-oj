#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n; // Nhập số phần tử của mảng
    vector<int> v(n); // Tạo một vector lưu trữ n phần tử
    for(int i = 0; i < n; i++) {
        cin >> v[i]; // Nhập giá trị của từng phần tử trong mảng
    }

    int dem1 = 0; // Biến đếm cho dãy con số 1 liên tiếp
    // Xử lý dãy con toàn số 1
    for(int i = 0; i < n; i++) {
        if(v[i] == 1) {
            dem1++; // Nếu gặp số 1, tăng biến đếm
        }
        if(v[i] == 0 || i == n - 1) { // Khi gặp số 0 hoặc là phần tử cuối cùng
            if(dem1 != 0) {
                cout << dem1 << " "; // Nếu có đếm được dãy số 1, in ra độ dài dãy
            }
            dem1 = 0; // Đặt lại biến đếm để bắt đầu đếm dãy mới
        }
    }
    cout << endl;

    int dem0 = 0; // Biến đếm cho dãy con số 0 liên tiếp
    // Xử lý dãy con toàn số 0
    for(int i = 0; i < n; i++) {
        if(v[i] == 0) {
            dem0++; // Nếu gặp số 0, tăng biến đếm
        }
        if(v[i] == 1 || i == n - 1) { // Khi gặp số 1 hoặc là phần tử cuối cùng
            if(dem0 != 0) {
                cout << dem0 << " "; // Nếu có đếm được dãy số 0, in ra độ dài dãy
            }
            dem0 = 0; // Đặt lại biến đếm để bắt đầu đếm dãy mới
        }
    }

    return 0; 
}
