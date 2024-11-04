#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string n;
    map<string, int> mp;

    // Đọc đầu vào cho đến khi gặp EOF
    while (getline(cin, n)) {
        mp[n]++;
    }

    // Xuất kết quả theo thứ tự từ điển của các website
    for (const auto& it : mp) {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}
