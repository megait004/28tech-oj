#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    // Loại bỏ tất cả các ký tự không phải chữ số
    for(char &x : s) {
        if( !(x >= '0' && x <= '9') ) {
            x = ' ';
        }
    }

    stringstream ss(s);   // Dùng stringstream để tách các số
    string tmp;
    long long tong = 0;   // Khai báo biến tong kiểu long long để chứa tổng
    while(getline(ss, tmp, ' ')) {  // Duyệt qua từng số
        if(tmp.empty()) continue;  // Bỏ qua chuỗi rỗng
        long long n = stoll(tmp);  // Chuyển chuỗi thành số nguyên
        tong += n;  // Cộng số vào tổng
    }
    
    cout << tong << endl;  
    return 0;
}
