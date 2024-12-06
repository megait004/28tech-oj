#include<bits/stdc++.h>
using namespace std;

int main() {
    string s; 
    cin >> s;  
    map<char, int> mp;

    // Đếm số lần xuất hiện của các kí tự trong xâu
    for (char c : s) {
        mp[c]++;
    }

    // Tìm kí tự xuất hiện nhiều nhất
    char max_char = '\0';  // Kí tự có số lần xuất hiện nhiều nhất
    int max_count = -1;
    
    for (auto& p : mp) {
        if (p.second > max_count || (p.second == max_count && p.first > max_char)) {
            max_count = p.second;
            max_char = p.first;
        }
    }

    // Tìm kí tự xuất hiện ít nhất
    char min_char = '\0';  // Kí tự có số lần xuất hiện ít nhất
    int min_count = INT_MAX;

    for (auto& p : mp) {
        if (p.second < min_count || (p.second == min_count && p.first > min_char)) {
            min_count = p.second;
            min_char = p.first;
        }
    }

  
    cout << max_char << " " << max_count << endl;
    cout << min_char << " " << min_count << endl;

    return 0;
}
