#include<iostream>
#include<algorithm>
using namespace std;

// Hàm đếm số chữ số chẵn trong một số nguyên
int chan(int n) {
    int digit; // Biến lưu chữ số hiện tại
    int demc = 0; // Đếm số chữ số chẵn
    while (n) { // Lặp đến khi n bằng 0
        digit = n % 10; // Lấy chữ số cuối cùng
        if (digit % 2 == 0) { // Nếu chữ số chẵn
            demc++; // Tăng bộ đếm
        }
        n = n / 10; // Loại bỏ chữ số cuối cùng
    }
    return demc; // Trả về số chữ số chẵn
}

// Hàm đếm số chữ số lẻ trong một số nguyên
int le(int n) {
    int digit; // Biến lưu chữ số hiện tại
    int deml = 0; // Đếm số chữ số lẻ
    while (n) { // Lặp đến khi n bằng 0
        digit = n % 10; // Lấy chữ số cuối cùng
        if (digit % 2 == 1) { // Nếu chữ số lẻ
            deml++; // Tăng bộ đếm
        }
        n = n / 10; // Loại bỏ chữ số cuối cùng
    }
    return deml; // Trả về số chữ số lẻ
}

// Hàm so sánh tùy chỉnh để sắp xếp theo số chữ số chẵn
bool cmp1(int x, int y) {
    if (chan(x) != chan(y)) { // So sánh số chữ số chẵn
        return chan(x) < chan(y); // Số có ít chữ số chẵn hơn được ưu tiên
    } else {
        return x < y; // Nếu bằng nhau, số nhỏ hơn được ưu tiên
    }
}

// Hàm so sánh tùy chỉnh để sắp xếp theo số chữ số lẻ
bool cmp2(int x, int y) {
    return le(x) < le(y); // Số có ít chữ số lẻ hơn được ưu tiên
}

int main() {
    int n; // Số lượng phần tử trong mảng
    cin >> n; // Nhập số lượng phần tử

    int a[n]; // Mảng ban đầu
    int b[n]; // Bản sao của mảng để sắp xếp riêng

    for (int i = 0; i < n; i++) { // Nhập giá trị cho mảng
        cin >> a[i];
        b[i] = a[i]; // Sao chép giá trị từ mảng a sang b
    }

    // Sắp xếp mảng a theo số chữ số chẵn
    sort(a, a + n, cmp1);

    // In mảng đã sắp xếp theo số chữ số chẵn
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl;

    // Sắp xếp mảng b theo số chữ số lẻ (duy trì thứ tự ban đầu khi bằng nhau)
    stable_sort(b, b + n, cmp2);

    // In mảng đã sắp xếp theo số chữ số lẻ
    for (int i : b) {
        cout << i << " ";
    }

    return 0; 
}
