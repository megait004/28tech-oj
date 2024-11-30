#include<iostream>
#include<string>
using namespace std;

int main() {
    string n; 
    cin >> n;  
    
    // Kiểm tra nếu độ dài chuỗi n là số chẵn
    if (n.size() % 2 == 0) {
        cout << "NOT FOUND";  // Nếu độ dài chuỗi là số chẵn, in "NOT FOUND"
    }
    else {
        // Nếu độ dài chuỗi là số lẻ, in ra ký tự ở giữa (n[n.size() / 2])
        cout << n[n.size() / 2];
    }
    return 0;
}
