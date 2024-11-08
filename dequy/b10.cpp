#include<iostream>
#include<iomanip>
using namespace std;

// Hàm đệ quy để tính tổng S(n) = 1/1 + 1/2 + ... + 1/n
double sum(int n) {
    if (n == 1) 
        return 1.0; // Điều kiện cơ sở: nếu n == 1, trả về 1.0 vì 1/1 = 1.0
    else 
        return (1.0 / n) + sum(n - 1); // Gọi đệ quy với (1/n) + sum(n - 1)
}

int main() {
    int n; 
    cin >> n; // Nhập vào giá trị n từ người dùng

    // In ra kết quả với 3 chữ số thập phân
    cout << setprecision(3) << fixed << sum(n);
    
    return 0;
}
