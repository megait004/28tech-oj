#include <iostream>
#include <set>
using namespace std;

int main() {
    int n; 
    cin >> n;  // Nhập số lượng phần tử trong mảng
    int arr[n]; // Khai báo mảng arr với n phần tử
    set<int> b; // Khai báo set b để lưu các phần tử khác nhau của mảng

    // Nhập các phần tử của mảng và thêm vào set để loại bỏ phần tử trùng lặp
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        b.insert(arr[i]);
    }

    // In ra số lượng phần tử duy nhất trong mảng
    cout << b.size() << endl;

    // Tìm giá trị lớn nhất và nhỏ nhất trong set b
    int _max = -10000000; // Khởi tạo _max với giá trị nhỏ
    int _min = 10000000;  // Khởi tạo _min với giá trị lớn
    for (int i : b) { // Duyệt từng phần tử i trong set b
        if (i >= _max) {
            _max = i; // Cập nhật _max nếu i lớn hơn hoặc bằng _max
        }
    }
    for (int i : b) { // Duyệt từng phần tử i trong set b
        if (i < _min) {
            _min = i; // Cập nhật _min nếu i nhỏ hơn _min
        }
    }

    // In ra giá trị lớn nhất và nhỏ nhất
    cout << _max << " " << _min << endl;

    // Khai báo set c để lưu các giá trị khác với _max và _min
    set<int> c;
    for (int i : b) {
        if (i == _max) {
            continue; // Bỏ qua giá trị lớn nhất
        }
        else if (i == _min) {
            continue; // Bỏ qua giá trị nhỏ nhất
        }
        else 
            c.insert(i); // Thêm các giá trị còn lại vào set c
    }

    // Tìm giá trị lớn thứ nhì và nhỏ thứ nhì trong set c
    _max = -1000000; // Khởi tạo lại _max cho giá trị lớn thứ nhì
    _min = 1000000;  // Khởi tạo lại _min cho giá trị nhỏ thứ nhì
    for (int i : c) { // Duyệt từng phần tử i trong set c
        if (i > _max) {
            _max = i; // Cập nhật _max nếu i lớn hơn _max
        }
    }
    for (int i : c) { // Duyệt từng phần tử i trong set c
        if (i < _min) {
            _min = i; // Cập nhật _min nếu i nhỏ hơn _min
        }
    }

    // In ra giá trị lớn thứ nhì và nhỏ thứ nhì
    cout << _max << " " << _min;
    
    return 0;
}
