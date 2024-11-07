#include <iostream>
using namespace std;

int F[100] = {0};  // Khởi tạo mảng F để lưu trữ các giá trị Fibonacci đã tính

// Hàm đệ quy tính số Fibonacci với lưu trữ
int fibo(int n) {
    if (n == 1) return 0;  // Trường hợp cơ bản: F1 = 0
    if (n == 2) return 1;  // Trường hợp cơ bản: F2 = 1

    if (F[n] != 0) return F[n];  // Nếu đã tính Fibonacci thứ n, trả về giá trị đã lưu
    F[n] = fibo(n - 1) + fibo(n - 2);  // Tính Fibonacci thứ n và lưu lại

    return F[n];
}

int main() {
    int n;
    cin >> n;  
    cout << fibo(n);  // Gọi hàm fibo và in ra số Fibonacci thứ n
    return 0;
}
