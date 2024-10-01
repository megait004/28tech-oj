#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n; 
    cin >> n; // Nhập số lượng phần tử của mảng

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i]; // Nhập các phần tử của mảng
    }

    int sum2 = 0; // Biến lưu tổng của 2 số liên tiếp
    int sum3 = 0; // Biến lưu tổng của 3 số liên tiếp
    int sum4 = 0; // Biến lưu tổng của 4 số liên tiếp

    // Tính tổng của 2 số liên tiếp trong mảng
    for(int i = 0; i < n - 1; i++) {
        sum2 = v[i] + v[i + 1]; // Tính tổng của phần tử i và phần tử i+1
        cout << sum2 << " "; // In ra tổng của 2 số liên tiếp
    }
    cout << endl; // Xuống dòng sau khi in hết tổng của 2 số liên tiếp

    // Tính tổng của 3 số liên tiếp trong mảng
    for(int i = 0; i < n - 2; i++) {
        sum3 = v[i] + v[i + 1] + v[i + 2]; // Tính tổng của 3 phần tử liên tiếp: i, i+1, i+2
        cout << sum3 << " "; // In ra tổng của 3 số liên tiếp
    }
    cout << endl; // Xuống dòng sau khi in hết tổng của 3 số liên tiếp

    // Tính tổng của 4 số liên tiếp trong mảng
    for(int i = 0; i < n - 3; i++) {
        sum4 = v[i] + v[i + 1] + v[i + 2] + v[i + 3]; // Tính tổng của 4 phần tử liên tiếp: i, i+1, i+2, i+3
        cout << sum4 << " "; // In ra tổng của 4 số liên tiếp
    }

    return 0; // Kết thúc chương trình
}
