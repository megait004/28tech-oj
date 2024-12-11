#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s); 

    // Chuyển tất cả ký tự trong chuỗi s thành chữ thường
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }

    stringstream ss(s); // Tạo một stringstream từ chuỗi s để dễ dàng tách từ
    string tmp;
    int dem = 0; // Khởi tạo biến đếm số lần xuất hiện của "28tech"

    // Tách chuỗi s thành các từ dựa trên dấu cách và kiểm tra mỗi từ
    while(getline(ss, tmp, ' ')){
        if(tmp == "28tech"){
            dem++; // Nếu từ hiện tại là "28tech", tăng biến đếm lên 1
        }
    }

    cout << dem; 

    return 0;
}
