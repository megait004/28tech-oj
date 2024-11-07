#include <iostream>
#include <cmath>    
using namespace std;

// Hàm đệ quy để tính tổng bình phương các số từ 1 đến n
int Sum(int n) {
    if (n == 1) {  // Trường hợp cơ bản: nếu n là 1, trả về 1^2
        return 1;
    } else {
        return pow(n, 2) + Sum(n - 1);  // Trường hợp đệ quy: cộng bình phương của n với tổng bình phương của các số từ 1 đến (n-1)
    }
}

int main() {
    int n;  
    cin >> n;  
    cout << Sum(n);  // Gọi hàm Sum và in ra kết quả
    return 0;  
}
