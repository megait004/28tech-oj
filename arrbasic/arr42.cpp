#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n; 
    cin >> n; // Đọc số lượng phần tử của mảng
    vector<int> v(n); // Khai báo mảng v chứa n phần tử

    // Nhập các phần tử của mảng
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Duyệt qua từng phần tử trong mảng để tìm phần tử lớn hơn đầu tiên ở bên phải
    for (int i = 0; i < n; i++) {
        int found = -1; // Biến lưu phần tử lớn hơn đầu tiên, mặc định là -1 nếu không tìm thấy

        // Duyệt qua các phần tử bên phải của v[i]
        for (int j = i + 1; j < n; j++) {
            if (v[j] > v[i]) { // Nếu tìm thấy phần tử lớn hơn v[i]
                found = v[j]; // Gán found bằng v[j]
                break; // Thoát khỏi vòng lặp vì đã tìm thấy phần tử lớn hơn đầu tiên
            }
        }

        cout << found << " "; // In ra phần tử lớn hơn đầu tiên hoặc -1 nếu không có
    }

    return 0;
}
