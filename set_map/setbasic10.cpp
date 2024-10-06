#include<iostream>
#include<map>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    char a[n], b[m];

    // Đọc vào n phần tử của mảng a
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Đọc vào m phần tử của mảng b
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }

    // Khai báo một map để lưu trữ số lần xuất hiện của các ký tự trong mảng a
    map<char, int> mp;

    // Duyệt qua từng phần tử trong mảng a và cập nhật số lần xuất hiện vào map
    for(char x : a) {
        mp[x] = 1 ;
    }

    // Duyệt qua từng phần tử trong mảng b
    for(char x : b) {
        // Nếu ký tự x trong mảng b xuất hiện đúng 1 lần trong mảng a
        if(mp[x] == 1) {
            mp[x] = 2;  // Đánh dấu ký tự này đã xuất hiện trong cả hai mảng
        }
    }

    // Duyệt qua từng phần tử trong mảng a
    for(char x : a) {
        // Nếu ký tự x đã được đánh dấu là xuất hiện trong cả hai mảng
        if(mp[x] == 2) {
            cout << x << " " ;  // In ký tự x ra màn hình
            mp[x] = 0;  // Đặt giá trị về 0 để tránh in lại ký tự này
        }
    }

    return 0;
}
