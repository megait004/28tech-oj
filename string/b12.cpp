#include<bits/stdc++.h>
using namespace std;

int main() {
    string s; 
    getline(cin, s); 
    stringstream ss(s); 
    string tmp; 
    int demkytu = 0; 
    int demtu = 0; 
    // Duyệt qua từng từ trong chuỗi
    while (getline(ss, tmp, ' ')) {
        for (int i = 0; i < tmp.size(); i++) { // Duyệt qua từng ký tự trong từ
            if (isupper(tmp[i])) { // Kiểm tra nếu ký tự là chữ in hoa
                demkytu++; // Tăng số lượng ký tự in hoa
                if (demkytu == tmp.size()) { // Nếu số ký tự in hoa bằng độ dài từ
                    demtu++; // Tăng số lượng từ thỏa mãn
                }
            }
        }
        demkytu = 0; // Reset số lượng ký tự in hoa cho từ tiếp theo
    }

    cout << demtu; 
    return 0;
}
