#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;  
    cin >> s; 
    int tong = 0;  // Khởi tạo biến tong để lưu tổng các chữ số trong chuỗi

    // Duyệt qua từng ký tự trong chuỗi s
    for(int i = 0; i < s.size(); i++) {
        tong = tong + s[i] - '0';  // Chuyển ký tự thành số nguyên và cộng vào tổng
    }

    cout << tong; 
    return 0; 
}
