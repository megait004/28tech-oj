#include<bits/stdc++.h>
using namespace std;

int main(){
    // Đọc vào một dòng chuỗi từ bàn phím
    string s ; 
    getline(cin , s);
    
    // Sử dụng stringstream để chia chuỗi s thành các từ
    stringstream ss(s);
    string tmp;
    
    // Khởi tạo một tập hợp (set) để lưu trữ các từ không trùng lặp
    set<string> se;
    
    // Lặp qua từng từ trong chuỗi s
    while(ss >> tmp){
        // Chuyển toàn bộ ký tự trong từ thành chữ thường
        for(int i = 0 ; i < tmp.size() ; i++){
            tmp[i] = tolower(tmp[i]);
        }
        // Thêm từ vào tập hợp (set) để đảm bảo không có từ trùng
        se.insert(tmp);
    }
    
    // In ra số lượng từ không trùng lặp trong tập hợp
    cout << se.size();
}
