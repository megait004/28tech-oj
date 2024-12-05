#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;  
    getline(cin, s);
    // Vòng lặp đầu tiên: Chuyển tất cả các ký tự trong chuỗi thành chữ hoa và in ra
    for(int i = 0; i < s.size(); i++){
        s[i] = toupper(s[i]);  // Chuyển ký tự tại vị trí i thành chữ hoa
        cout << s[i];  
    }
    cout << endl;  
    // Vòng lặp thứ hai: Chuyển tất cả các ký tự trong chuỗi thành chữ thường và in ra
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);  // Chuyển ký tự tại vị trí i thành chữ thường
        cout << s[i];  
    }
    return 0;  
}
