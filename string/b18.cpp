#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

// Hàm để sắp xếp các từ theo chiều dài và thứ tự từ điển
bool compare(const string &a, const string &b) {
    // So sánh chiều dài của các từ trước
    if (a.length() != b.length()) {
        return a.length() < b.length();
    }
    // Nếu chiều dài bằng nhau, so sánh theo thứ tự từ điển
    return a < b;
}

int main() {
    string S;
    getline(cin, S);
    
    // Sử dụng stringstream để tách các từ trong xâu
    stringstream ss(S);
    vector<string> words;
    string word;
    
    // Tách các từ và lưu vào vector
    while (ss >> word) {
        words.push_back(word);
    }
    
    // Sắp xếp các từ theo chiều dài và từ điển
    sort(words.begin(), words.end(), compare);
    
    for (int i = 0; i < words.size(); ++i) {
        cout << words[i] << " ";
        
    }
    
    return 0;
}
