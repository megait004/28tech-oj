#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; 
    string s1;
    getline(cin, s);
    getline(cin, s1);
    
    // Sử dụng hai tập riêng biệt để lưu ký tự xuất hiện trong mỗi chuỗi
    set<char> se1;
    set<char> se2;
    
    // Sử dụng hai bảng đếm để đếm tần suất ký tự trong từng chuỗi
    unordered_map<char, int> mp1;
    unordered_map<char, int> mp2;
    
    for(char c : s){
        mp1[c]++;
    }
    for(char c : s1){
        mp2[c]++;
    }
    
    // Thêm vào se1 các ký tự chỉ xuất hiện trong s
    for(char c : s){
        if(mp1[c] > 0 && mp2.find(c) == mp2.end()){
            se1.insert(c);
        }
    }
    
    // Thêm vào se2 các ký tự chỉ xuất hiện trong s1
    for(char c : s1){
        if(mp2[c] > 0 && mp1.find(c) == mp1.end()){
            se2.insert(c);
        }
    }
    
    for(auto c : se1){
        cout << c;
    }
    cout << endl;
    for(auto c : se2){
        cout << c;
    }
    
    return 0; 
}
