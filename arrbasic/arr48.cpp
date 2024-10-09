#include<iostream>
#include<cmath>
using namespace std;

// Hàm để tìm độ dài dãy con tăng chặt dài nhất
int length_max(int a[], int n) {
    int dem = 1; // Biến đếm độ dài dãy con liên tiếp hiện tại
    int res = -1; // Biến để lưu độ dài dãy con lớn nhất tìm được
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) { // Nếu phần tử hiện tại lớn hơn phần tử trước đó
            dem++; // Tăng độ dài dãy con liên tiếp
        } else {
            res = max(res, dem); // Cập nhật độ dài dãy con lớn nhất
            dem = 1; // Khởi động lại độ dài dãy con
        }
    }
    return res; // Trả về độ dài dãy con lớn nhất
}

int main() {
    int t; 
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int n; 
        cin >> n;
        int arr[n + 1]; // Khởi tạo mảng có kích thước n+1
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; // Nhập các phần tử của mảng
        }
        arr[n] = -1; // Thêm một phần tử giá trị -1 vào cuối mảng để đảm bảo kết thúc dãy con
        n++; // Tăng kích thước mảng lên 1

        int m = length_max(arr, n); // Tìm độ dài dãy con tăng chặt dài nhất

        cout << "Test #" << i << " :" << endl;
        cout << m << endl; // In ra độ dài dãy con dài nhất

        int dem = 1; // Biến đếm độ dài dãy con hiện tại
        for (int i = 1; i < n; i++) {
            if (arr[i] > arr[i - 1]) { 
                dem++; // Nếu phần tử hiện tại lớn hơn phần tử trước đó, tăng độ dài dãy con
            } else {
                if (dem == m) { // Nếu độ dài dãy con bằng với độ dài dãy con lớn nhất
                    for (int j = i - dem; j < i; j++) {
                        cout << arr[j] << " "; // In ra dãy con
                    }
                    cout << endl;
                }
                dem = 1; // Khởi động lại biến đếm cho dãy con tiếp theo
            }
        }
    }
    return 0;
}
