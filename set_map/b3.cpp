#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n; 
    cin >> n; // Nhập số lượng phần tử của mảng

    vector<int> v(n); // Khởi tạo vector `v` với n phần tử
    map<int, int> mp; // Khởi tạo map `mp` để lưu tần suất xuất hiện của từng phần tử

    // Nhập các phần tử của vector `v`
    for (int i = 0; i < n; i++) {
        cin >> v[i]; // Nhập phần tử tại vị trí i
    }

    // Đếm số lần xuất hiện của mỗi phần tử trong `v` và lưu vào map `mp`
    for (int i = 0; i < n; i++) {
        mp[v[i]]++; // Tăng giá trị đếm của phần tử `v[i]` trong map `mp`
    }

    // In ra các phần tử duy nhất của vector `v` theo thứ tự xuất hiện ban đầu
    for (auto it : v) {
        if (mp[it] != 0) { // Nếu phần tử `it` vẫn chưa được in ra
            cout << it << " "; // In ra phần tử
        }
        mp[it] = 0; // Đặt giá trị của phần tử `it` trong `mp` về 0 để đảm bảo không in lại
    }

    return 0; 
}
