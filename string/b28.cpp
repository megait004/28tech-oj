#include <iostream>
#include <string>
using namespace std;

int main() {
    string n, m;
    cin >> n >> m;
    
    // So sánh độ dài chuỗi
    if (n.length() > m.length()) {
        cout << "28tech";
    } else if (n.length() < m.length()) {
        cout << "29tech";
    } else {
        // Nếu độ dài bằng nhau, so sánh chuỗi theo từng ký tự
        if (n > m) {
            cout << "28tech";
        } else if (n < m) {
            cout << "29tech";
        } else {
            cout << "30tech";
        }
    }

    return 0;
}
