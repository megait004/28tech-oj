#include <bits/stdc++.h>
using namespace std;
bool cmp(const string& a, const string& b) {
    if (a.size() != b.size())
        return a.size() < b.size();
    return a < b;
}

int main(){
    string s;
    getline(cin, s);

    stringstream ss(s);
    string w;
    vector<string> words;

    // Tách các từ và lưu vào vector
    while(ss >> w){
        words.push_back(w);
    }

    // Sắp xếp từ theo thứ tự từ điển tăng dần và in ra
    sort(words.begin(), words.end());
    for(const string& word : words){
        cout << word << " ";
    }
    cout << endl;

    // Sắp xếp từ theo thứ tự chiều dài tăng dần và in ra
    sort(words.begin(), words.end(), cmp);
    for(const string& word : words){
        cout << word << " ";
    }

    return 0;
}
