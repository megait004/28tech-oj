#include<bits/stdc++.h>
using namespace std;

bool tn(string &s) {
    string res = s;
    reverse(s.begin(), s.end());
    return res == s;
}

bool cmp(const string &x, const string &y) {
    if (x.size() != y.size()) {
        return x.size() < y.size();
    }
    return false; // Giữ nguyên thứ tự xuất hiện ban đầu nếu cùng độ dài
}

int main() {
    string s;
    getline(cin, s);
    string tmp;
    vector<string> v;
    unordered_set<string> seen; // Để loại bỏ từ trùng lặp

    stringstream ss(s);
    while (ss >> tmp) {
        if (tn(tmp) && seen.find(tmp) == seen.end()) {
            v.push_back(tmp);
            seen.insert(tmp);
        }
    }

    stable_sort(v.begin(), v.end(), cmp); // stable_sort , giữ thứ tự xuất hiện khi sắp xếp 
	for(auto it : v){
		cout << it << " ";
	}

    return 0;
}
