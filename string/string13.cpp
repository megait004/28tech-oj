#include<bits/stdc++.h> 
using namespace std;

int main(){
    string s; 
    getline(cin, s); 
    
    stringstream ss(s); // Chuyển chuỗi `s` thành đối tượng `stringstream` để dễ dàng phân tích từ.
    string tmp;
    set<string> se; // Tập hợp các từ duy nhất (không trùng lặp).
    vector<string> v; // Lưu danh sách các từ theo thứ tự xuất hiện ban đầu.
    map<string, int> mp; // Đếm số lần xuất hiện của từng từ.

    // Tách từng từ từ chuỗi `s` và lưu vào vector `v`.
    while(ss >> tmp){
        v.push_back(tmp);
    }

    // Đếm số lần xuất hiện của mỗi từ và lưu vào map `mp`.
    for(int i = 0; i < v.size(); i++){
        mp[v[i]]++;
    }

    // Thêm các từ duy nhất vào set `se`.
    for(int i = 0; i < v.size(); i++){
        se.insert(v[i]);
    }

    // Xuất danh sách các từ duy nhất cùng số lần xuất hiện.
    for(string it : se){
        cout << it << " " << mp[it] << endl;
    }
    cout << endl;

    // Xuất danh sách các từ theo thứ tự xuất hiện ban đầu cùng số lần xuất hiện.
    // Sau khi in ra, đặt giá trị đếm của từ trong `mp` về 0 để tránh in lặp lại.
    for(string it : v){
        if(mp[it] != 0){
            cout << it << " " << mp[it];
            cout << endl;
        }
        mp[it] = 0; // Đảm bảo mỗi từ chỉ được xử lý một lần.
    }

    return 0;
}
