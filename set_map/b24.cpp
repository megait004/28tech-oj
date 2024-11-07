#include <bits/stdc++.h> 
using namespace std;

int main() {
    map<string, int> mp; // Tạo một map để lưu trữ chuỗi và tần suất xuất hiện của chúng
    int n;
    cin >> n;  

    // Vòng lặp nhập các chuỗi và tăng tần suất của mỗi chuỗi trong map
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        mp[s]++;  // Tăng tần suất của chuỗi s trong map
    }

    int _min = 10000000, _max = 0;  // Khởi tạo giá trị tối thiểu và tối đa cho tần suất

    // Duyệt qua map và tìm giá trị tần suất nhỏ nhất và lớn nhất
    for (auto x : mp) {
        _min = min(x.second, _min);  // Cập nhật tần suất nhỏ nhất
        _max = max(x.second, _max);  // Cập nhật tần suất lớn nhất
        cout << x.first << " " << x.second << endl;  // In ra chuỗi và tần suất của nó
    }

    cout << endl;  // Xuống dòng

    // Tìm và in chuỗi có tần suất nhỏ nhất
    for (auto x : mp) {
        if (x.second == _min) {  // Nếu tần suất của chuỗi bằng giá trị nhỏ nhất
            cout << x.first << " " << x.second << endl;  // In ra chuỗi và tần suất nhỏ nhất
            break;  // Thoát khỏi vòng lặp sau khi tìm thấy
        }
    }

    // Tìm và in chuỗi có tần suất lớn nhất
    for (auto x : mp) {
        if (x.second == _max) {  // Nếu tần suất của chuỗi bằng giá trị lớn nhất
            cout << x.first << " " << x.second << endl;  // In ra chuỗi và tần suất lớn nhất
            break;  // Thoát khỏi vòng lặp sau khi tìm thấy
        }
    }
}
