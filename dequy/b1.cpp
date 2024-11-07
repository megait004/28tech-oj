#include <iostream> 
using namespace std;

// Hàm đệ quy tính tổng các số nguyên từ 1 đến n
int Sum(int n) {
    if (n == 1) {  // Trường hợp cơ bản: nếu n là 1, trả về 1
        return 1;
    } else {
        return n + Sum(n - 1);  // Trường hợp đệ quy: cộng n với tổng của (n-1) số trước
    }
}

int main() {
    int n;  
    cin >> n;  
    cout << Sum(n);  // Gọi hàm Sum và in ra kết quả
    return 0;  
}
