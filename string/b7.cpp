#include<iostream>
#include<string>
#include<ctype.h>
#include<vector>
using namespace std;

int main() {
    string s; 
    cin >> s; 

    vector<int> v;  // Khởi tạo vector lưu các chữ số.
    vector<char> c;  // Khởi tạo vector lưu các ký tự chữ cái.

    // Duyệt qua từng ký tự trong chuỗi s
    for(int i = 0; i < s.size(); i++) {
        if(isdigit(s[i])) {  // Kiểm tra nếu ký tự là chữ số
            v.push_back(s[i] - '0');  // Chuyển ký tự số thành số nguyên và thêm vào vector v.
        }
        else if(isalpha(s[i])) {  // Kiểm tra nếu ký tự là chữ cái
            c.push_back(s[i]);  // Thêm ký tự chữ cái vào vector c.
        }
    }

    // In ra các chữ số từ vector v
    for(int i : v) {
        cout << i;  
    }
    cout << endl;  
    // In ra các ký tự chữ cái từ vector c
    for(char i : c) {
        cout << i;  
    }
}
