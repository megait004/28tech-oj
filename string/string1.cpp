#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; 
    getline(cin, s);  // Đọc cả xâu có chứa khoảng trắng
    int dem1 = 0;  // Đếm số lượng chữ số
    int dem2 = 0;  // Đếm số lượng chữ cái
    int dem3 = 0;  // Đếm số lượng ký tự đặc biệt
    
    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
            dem1++;
        } else if (isalpha(s[i])) {
            dem2++;
        } else {
            dem3++;
        }
    }
    
    cout << dem2 << " " << dem1 << " " << dem3;
    return 0;
}
