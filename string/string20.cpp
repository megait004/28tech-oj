#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string target = "python";
    int j = 0; // Con trỏ để duyệt qua từ "python"

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == target[j]) {
            j++;
            if (j == target.size()) break; // Đã tìm đủ các ký tự của "python"
        }
    }

    if (j == target.size())
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
