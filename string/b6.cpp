#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string s; 
    cin >> s; 
    
    vector<int> v;  // Khởi tạo vector để lưu trữ các giá trị số nguyên.
    int dem = 0;    // Biến đếm số lượng chữ số trong chuỗi.
    
    // Duyệt qua từng ký tự trong chuỗi s
    for(int i = 0; i < s.size(); i++) {
        s[i] = s[i] - '0';  // Chuyển ký tự thành số nguyên (digit).
        dem++;  // Tăng biến đếm mỗi khi xử lý một ký tự.
        v.push_back(s[i]);  // Thêm số nguyên vào vector v.
    }
    
    sort(v.begin(), v.end());  // Sắp xếp các phần tử trong vector v theo thứ tự tăng dần.
    
    // Duyệt qua các phần tử trong vector v
    for(int i : v) {
        if(dem > 1) {  // Nếu có nhiều hơn 1 chữ số
            if(i == 0) {  // Nếu gặp số 0, bỏ qua (không in ra).
                continue;
            } else {
                cout << i;  // In ra các số khác 0.
            }
        } else if(dem == 1) {  // Nếu chỉ có 1 chữ số
            cout << i;  // In ra số duy nhất.
            return 0;  
        }
    }
    
    return 0; 
}
