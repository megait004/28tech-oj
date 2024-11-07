#include <iostream> 
#include <cmath>    
using namespace std;

// Hàm đệ quy tính tổng lập phương của các số từ 1 đến n
long long Sum(long long n) {
    if (n == 1) return 1;  // Trường hợp cơ bản: nếu n là 1, trả về 1^3 = 1
    else {
        // Trường hợp đệ quy: tính lập phương của n và cộng với tổng lập phương của các số từ 1 đến (n-1)
        return (long long)pow(n, 3) + Sum(n - 1);
    }
}

int main() {
    long long n;  
    cin >> n;  
    cout << Sum(n);  // Gọi hàm Sum và in ra kết quả
    return 0;  
}
