#include<iostream>
#include<map>
using namespace std;

int main() {
    // Đọc vào số lượng phần tử
    int n; 
    cin >> n;

    // Khai báo một map để lưu trữ giá trị và số lần xuất hiện
    map<int, int> mp;
    // key: giá trị của phần tử
    // value: số lần phần tử đó xuất hiện

    // Đọc vào n phần tử và lưu vào map
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++; // Tăng số lần xuất hiện của phần tử x
    }

    // Duyệt qua từng phần tử trong map và in ra giá trị cùng với số lần xuất hiện
    for(auto it : mp) {
        cout << it.first << " " << it.second << endl;
        // it.first: giá trị của phần tử
        // it.second: số lần phần tử đó xuất hiện
    }

    return 0;
}
