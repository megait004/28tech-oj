#include <iostream>
using namespace std;

// Hàm đệ quy tính tổng các chữ số
long long tongChuSo(long long n) {
    if (n < 10) {
        return n; // Trường hợp cơ sở: chỉ có một chữ số
    }
    return (n % 10) + tongChuSo(n / 10); // Tổng chữ số cuối cộng đệ quy phần còn lại
}

int main() {
    long long n; 
    cin >> n;
    cout << tongChuSo(n); 
    return 0;
}
