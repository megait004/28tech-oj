#include<iostream>
#include<set>
#include<vector>
#include<string>
using namespace std;

int main(){
    string s ; 
    cin >> s ; // Nhập chuỗi s từ người dùng
    
    int k ; // vị trí chèn chuỗi 
    cin >> k; 
    
    string t = "28tech"; // Khai báo chuỗi t có giá trị "28tech"
    
    s.insert(k,t); // Chèn chuỗi t vào chuỗi s tại vị trí k
    
    cout << s ; 
    
    return 0; 
}
