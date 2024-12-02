#include<bits/stdc++.h>
using namespace std;

int main() {
    string s; 
    cin >> s;  

    vector<char> c;  // Khởi tạo vector để lưu các ký tự không thuộc "28tech".

    // Tạo tập các ký tự cần loại bỏ: '2', '8', 't', 'e', 'c', 'h'
    set<char> removeSet = {'2', '8', 't', 'e', 'c', 'h'};
    
    // Duyệt qua từng ký tự trong chuỗi s
    for (int i = 0; i < s.size(); i++) {
        if (removeSet.find(s[i]) == removeSet.end()) {  // Nếu ký tự không thuộc "28tech"
            c.push_back(s[i]);  // Thêm vào vector c.
        }
    }

    // Nếu vector c không rỗng, in các ký tự trong c
    if (!c.empty()) {
        for (char i : c) {
            cout << i;  
        }
    } else {
        cout << "EMPTY";  // Nếu vector c rỗng, in ra "EMPTY".
    }

    return 0;
}
