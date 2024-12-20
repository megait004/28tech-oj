#include <bits/stdc++.h>
using namespace std;
// hàm chuẩn hoá in hoa ký tự đầu 
void chuanHoa(string &s) {
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }
}
// hàm để in hoa cả 1 chữ cái 
void inHoa(string &s) {
    for (char &x : s) {
        x = toupper(x);
    }
}

int main() {
    string s;
    getline(cin, s);
    vector<string> v;
    stringstream ss(s);
    string w;

    // Tách chuỗi và chuẩn hóa từng từ
    while (ss >> w) {
        chuanHoa(w);
        v.push_back(w);
    }

    // Viết hoa từ cuối cùng
    inHoa(v[v.size() - 1]);

    // In ra các từ theo định dạng yêu cầu
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i == v.size() - 1) {
            cout << endl;
        } else if (i != v.size() - 2) {
            cout << " ";
        } else {
            cout << ", ";
        }
    }

    // In từ cuối cùng và các từ còn lại
    cout << v[v.size() - 1] << ", ";
    for (int i = 0; i < v.size() - 1; i++) {
        cout << v[i];
        if (i != v.size() - 2) {
            cout << " ";
        }
    }

    return 0;
}
