#include<bits/stdc++.h>  
using namespace std;

int main() {
    string s; 
    cin >> s;  

    map<char, int> mp;  // Khai báo một map để lưu trữ tần suất xuất hiện của mỗi ký tự trong chuỗi

    // Duyệt qua từng ký tự trong chuỗi để đếm tần suất xuất hiện của mỗi ký tự
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;  // Tăng giá trị tần suất của ký tự tại vị trí i trong chuỗi
    }

    // In ra các ký tự và tần suất của chúng (theo thứ tự của ký tự trong map)
    for (auto i : mp) {
        cout << i.first << " " << i.second;  
        cout << endl;  // Xuất một dòng mới sau mỗi ký tự và tần suất
    }

    cout << endl;  

    // In ra các ký tự và tần suất của chúng theo thứ tự xuất hiện trong chuỗi ban đầu
    for (int i = 0; i < s.size(); i++) {
        // Nếu tần suất của ký tự chưa được in ra (tần suất khác 0), thì in ra và cập nhật tần suất về 0
        if (mp[s[i]] != 0) {
            cout << s[i] << " " << mp[s[i]];  
            cout << endl;  
            mp[s[i]] = 0;  // Đặt tần suất của ký tự này về 0 sau khi đã in ra
        }
    }

    return 0;  
}
