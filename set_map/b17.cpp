#include<iostream>
#include<map>
#include<string>
#define MOD  1e9 + 7  // Định nghĩa hằng MOD với giá trị 1e9 + 7, để so sánh số tối thiểu
using namespace std;

int main(){
    map<char, int> mp;  // Khởi tạo map `mp` để lưu số lần xuất hiện của từng ký tự
    string s;
    getline(cin, s);  // Đọc chuỗi đầu vào từ người dùng
    
    // Duyệt qua từng ký tự `x` trong chuỗi `s`
    for(char x : s){
        mp[x]++;  // Tăng số lần xuất hiện của ký tự `x` trong map
    }
    
    int _min = MOD, _max = 0;  // Khởi tạo `_min` với giá trị lớn để tìm số lần xuất hiện ít nhất, `_max` là số lần xuất hiện nhiều nhất
    
    // Duyệt qua từng phần tử `x` trong `mp`
    for(auto x : mp){
        _min = min(x.second, _min);  // Tìm số lần xuất hiện ít nhất
        _max = max(x.second, _max);  // Tìm số lần xuất hiện nhiều nhất
    }
    
    // In ra ký tự có số lần xuất hiện nhiều nhất và số lần xuất hiện
    for(auto x : mp){
        if(x.second == _max){
            cout << x.first << " " << _max << endl;
            break;  
        }
    }
    
    // Duyệt ngược qua các phần tử trong `mp` để tìm ký tự xuất hiện ít nhất
    for(auto it = mp.rbegin(); it != mp.rend(); it++){
        if(it->second == _min){
            cout << (*it).first << " " << _min << endl;
            break;  
        }
    }
    
    cout << mp.size();  // In ra số lượng các ký tự khác nhau trong chuỗi
}
