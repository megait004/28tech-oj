#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s); 
    stringstream ss(s);
    string tmp;
    vector<string> v;

    while (ss >> tmp) {
        string tmp_reversed = tmp;
        reverse(tmp_reversed.begin(), tmp_reversed.end());
        
        // Kiểm tra xem từ có thuận nghịch không
        if (tmp == tmp_reversed) {
            v.push_back(tmp);
        }
    }

    // Sắp xếp các từ thuận nghịch theo thứ tự từ điển tăng dần
    sort(v.begin(), v.end());

    for (auto it : v) {
        cout << it << " ";
    }
    return 0;
}
