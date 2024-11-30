#include<iostream>
#include<string>
using namespace std;

int main() {
    string s; 
    getline(cin, s); 
    int sum = 0;  
    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {  // Kiểm tra nếu ký tự là chữ số
            sum += s[i] - '0';  // Chuyển ký tự số thành số và cộng vào tổng
        }
    }

    cout << sum; 
    return 0;
}
