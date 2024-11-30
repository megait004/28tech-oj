#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string result = "";  
    int count = 0;  // Biến đếm số chữ số đã duyệt

    // Duyệt từ cuối của chuỗi số
    for (int i = s.size() - 1; i >= 0; i--) {
        result.push_back(s[i]);  // Thêm ký tự vào chuỗi kết quả
        count++;  // Tăng biến đếm

        // Nếu đã đếm được 3 chữ số, thêm dấu phẩy
        if (count == 3 && i != 0) {
            result.push_back(',');  // Thêm dấu phẩy nếu không phải là chữ số đầu tiên
            count = 0;  // Đặt lại đếm sau khi thêm dấu phẩy
        }
    }

    // Đảo ngược chuỗi kết quả
    reverse(result.begin(), result.end());

    cout << result;  
    return 0;
}
