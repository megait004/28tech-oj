#include<bits/stdc++.h>
using namespace std;

int main() {
    string s; 
    getline(cin, s); 
    stringstream ss(s); 
    string tmp;
    int vitri = 0;
    vector<string> v; // Lưu các từ theo quy tắc
    // Đọc các từ từ stringstream
    while(ss >> tmp) {
        if(vitri % 2 == 0) {
            v.push_back(tmp); // Thêm từ vào v nếu chỉ số là chẵn
        } else {
        	// đảo ngược các ký tự của mỗi từ 
            reverse(tmp.begin() , tmp.end());
            v.push_back(tmp);
        }
        vitri++;
    }

    for(auto &it : v) {
        cout << it << " ";
    }

    return 0;
}
