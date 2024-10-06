#include<iostream>
#include<map>
using namespace std;

int main() {
    // Đọc vào số lượng cặp phần tử cần xử lý
    int n; 
    cin >> n;
    // Khai báo một map để lưu trữ cặp giá trị và số lần xuất hiện
    map<pair<int, int>, int> mp;

    // Duyệt qua n cặp phần tử và lưu vào map
    for(int i = 0; i < n; i++) {
        pair<int, int> x;
        cin >> x.first >> x.second;  // Đọc vào một cặp giá trị (first, second)
        mp[x]++;  // Tăng số lần xuất hiện của cặp giá trị này
    }

    // Duyệt qua tất cả các phần tử trong map và in ra cặp giá trị cùng số lần xuất hiện của nó
    for(auto it : mp) {
        cout << it.first.first << " " << it.first.second << " " << it.second << endl;
        // it.first.first: giá trị đầu tiên của cặp
        // it.first.second: giá trị thứ hai của cặp
        // it.second: số lần xuất hiện của cặp giá trị này
    }

    return 0;
}
