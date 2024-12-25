#include<bits/stdc++.h>
using namespace std;

// Hàm chuyển đổi số nguyên long long thành chuỗi string
string my_to_string(long long n) {
    // Nếu số âm, ta lưu dấu âm và làm việc với phần dương của nó
    bool isNegative = n < 0;
    if (isNegative) {
        n = -n;
    }
    string s = "";
    
    // Xử lý trường hợp n == 0
    if (n == 0) {
        return "0";
    }
    
    // Lấy các chữ số của n và lưu chúng vào chuỗi s
    while (n > 0) {
        s = (char)(n % 10 + '0') + s; // Lấy chữ số và cộng vào chuỗi s
        n /= 10;
    }

    // Nếu là số âm, thêm dấu '-' vào đầu chuỗi
    if (isNegative) {
        s = "-" + s;
    }

    return s;
}

int main() {
    long long n;
    cin >> n;
    cout << my_to_string(n) << endl;  
    return 0;
}
