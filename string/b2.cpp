#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    getline(cin, s);  

    // 1. Đảo ngược chuỗi
    for (int i = s.size() - 1; i >= 0; i--) {
        cout << s[i];  
    }
    cout << endl;

    // 2. Chuyển chuỗi thành chữ thường
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;  // Chuyển ký tự hoa thành ký tự thường
        }
        cout << s[i];  
    }
    cout << endl;

    // 3. Chuyển chuỗi thành chữ hoa
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 32;  // Chuyển ký tự thường thành ký tự hoa
        }
        cout << s[i];  
    }
    cout << endl;

    return 0;
}
