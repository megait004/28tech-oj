#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, string> mp;
    
    // Nhập thông tin sinh viên
    while (n--) {
        string msv;
        string tsv;
        cin >> msv;
        cin.ignore();  // Bỏ qua ký tự xuống dòng sau mã sinh viên
        getline(cin, tsv);  // Đọc tên sinh viên
        mp[msv] = tsv;  // Lưu mã và tên vào map
    }
    
    int q;
    cin >> q;
    cin.ignore();  // Bỏ qua ký tự xuống dòng sau số lượng truy vấn
    
    // Xử lý các truy vấn
    while (q--) {
        string msv2;
        getline(cin, msv2);
        if (mp.count(msv2)) {
            cout << mp[msv2] << endl;  // In tên sinh viên nếu mã tồn tại
        } else {
            cout << "NOT FOUND" << endl;  // In NOT FOUND nếu không tìm thấy
        }
    }
    
    return 0;
}
