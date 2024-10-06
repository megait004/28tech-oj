#include<iostream>
#include<map>
using namespace std;

int main() {
    // Đọc vào số lượng phần tử trong mảng
    int n;
    cin >> n;

    // Khai báo mảng a để lưu n phần tử
    int a[n];
    // Khai báo một map để lưu trữ giá trị và số lần xuất hiện
    map<int, int> mp;

    // Đọc n phần tử và lưu vào mảng, đồng thời cập nhật số lần xuất hiện vào map
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;  // Tăng số lần xuất hiện của phần tử a[i]
    }

    // Duyệt qua từng phần tử trong mảng a
    for(int x : a) {
        // Nếu phần tử x có số lần xuất hiện khác 0
        if(mp[x] != 0) {
            // In ra giá trị x và số lần xuất hiện của nó
            cout << x << " " << mp[x] << endl;
            // Đặt số lần xuất hiện của x về 0 để tránh in lại lần sau
            mp[x] = 0;
        }
    }

    return 0;
}
