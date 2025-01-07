#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n; 
    cin >> n; // Nhập số lượng phần tử trong danh sách.
    
    vector<char> v(n); // Khởi tạo vector chứa các ký tự đầu vào.
    vector<char> v1;   // Vector để chứa các nguyên âm.
    vector<char> v2;   // Vector để chứa các phụ âm.
    
    for(int i = 0; i < v.size(); i++) {
        cin >> v[i]; // Nhập từng ký tự vào vector v.
    }
    
    for(int i = 0; i < v.size(); i++) {
        v[i] = tolower(v[i]); // Chuyển tất cả ký tự trong vector thành chữ thường.
    }
    
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u') {
            v1.push_back(v[i]); // Nếu là nguyên âm, thêm vào vector v1.
        } else {
            v2.push_back(v[i]); // Nếu không phải nguyên âm, thêm vào vector v2.
        }
    }
    
    for(const char &it : v1) { 
        cout << it << " "; // In ra các nguyên âm trong vector v1.
    }
    cout << endl;

    reverse(v2.begin(), v2.end()); // Đảo ngược thứ tự các phần tử trong vector v2.
    for(const char &it : v2) {
        cout << it << " "; // In ra các phụ âm trong vector v2 (sau khi đã đảo ngược).
    }
    
    return 0; // Kết thúc chương trình.
}
