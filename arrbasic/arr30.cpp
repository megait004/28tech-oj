#include<iostream>
#include<vector>
// Tạo một mảng đủ lớn để đánh dấu số lần xuất hiện của các giá trị
int mark[1000001];
using namespace std;

int main() {
    int n; 
    // Nhập vào số lượng phần tử của mảng
    cin >> n;

    // Tạo một vector để lưu giá trị của mảng
    vector<int> v(n);
    // Nhập giá trị cho từng phần tử của vector
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Vòng for này dùng để đếm số lần xuất hiện của mỗi giá trị trong mảng v
    for (int i = 0; i < n; i++) {
        mark[v[i]]++;
    }

    // Khởi tạo biến max_count để lưu số lần xuất hiện lớn nhất
    // và biến vitri để lưu giá trị có số lần xuất hiện lớn nhất
    int max_count = 0;
    int vitri;

    // Tìm giá trị xuất hiện nhiều nhất trong mảng
    for (int i = 0; i < n; i++) {
        // Nếu số lần xuất hiện của giá trị v[i] lớn hơn max_count hiện tại
        if (mark[v[i]] > max_count) {
            max_count = mark[v[i]]; // Cập nhật max_count
            vitri = v[i]; // Lưu giá trị có số lần xuất hiện lớn nhất
        }
    }

    // Xuất ra giá trị xuất hiện nhiều nhất và số lần xuất hiện của nó
    cout << vitri << " " << max_count;
}
