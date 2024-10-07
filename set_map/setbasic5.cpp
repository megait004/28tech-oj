#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m; // Nhập số phần tử của mảng A và mảng B

    vector<int> A(n); // Khởi tạo mảng A với n phần tử
    multiset<int> B;  // Khởi tạo multiset B để lưu trữ các phần tử của mảng B

    // Nhập các phần tử cho mảng A
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Nhập các phần tử cho mảng B và lưu vào multiset B
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        B.insert(x); // Thêm phần tử vào multiset B
    }

    // Duyệt qua từng phần tử của mảng A để đếm số lần xuất hiện của chúng trong multiset B
    for (int i = 0; i < n; i++) {
        cout << B.count(A[i]) << " "; // Sử dụng hàm count() để đếm số lần xuất hiện của phần tử A[i] trong B
    }

    return 0; 
}
