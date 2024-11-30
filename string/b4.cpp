#include<iostream>
#include<string>
using namespace std;

bool sodep(const string &s) {
    // Duyệt qua từng cặp chữ số liền kề
    for (int i = 0; i < s.size() - 1; i++) {
        // Kiểm tra sự lệch nhau của hai chữ số liền kề
        if (abs((s[i] - '0') - (s[i + 1] - '0')) != 1) {
            return false;  // Nếu sự lệch không phải 1, trả về false
        }
    }
    return true;  // Nếu tất cả các cặp đều lệch nhau đúng 1 đơn vị, trả về true
}

int main() {
    string n;
    cin >> n; 

    if (sodep(n)) {
        cout << "YES";  // In "YES" nếu số đẹp
    } else {
        cout << "NO";   // In "NO" nếu không phải số đẹp
    }
    return 0;
}
