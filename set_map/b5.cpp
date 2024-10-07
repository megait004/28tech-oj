#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    char arr[n];
    map<char, int> mp;

    // Nhập mảng ký tự
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Đếm tần suất của từng ký tự
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    // Tìm ký tự có thứ tự từ điển nhỏ nhất và in ra tần suất của nó
    auto min_char = mp.begin();  // Ký tự có thứ tự từ điển nhỏ nhất trong map
    cout << min_char->first << " " << min_char->second << endl;

    // Tìm ký tự có thứ tự từ điển lớn nhất và in ra tần suất của nó
    auto max_char = mp.rbegin();  // Ký tự có thứ tự từ điển lớn nhất trong map
    cout << max_char->first << " " << max_char->second << endl;

    // In các ký tự theo thứ tự từ điển tăng dần kèm tần suất
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    // In các ký tự theo thứ tự từ điển giảm dần kèm tần suất
    for (auto it = mp.rbegin(); it != mp.rend(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}
