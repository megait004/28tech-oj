#include<iostream>
using namespace std;

// Hàm đệ quy để tính UCLN của hai số a và b
long long ucln(long long a, long long b) {
    if (b == 0) return a; // Điều kiện cơ sở: nếu b = 0 thì UCLN là a
    return ucln(b, a % b); // Gọi đệ quy với b và phần dư của a chia b
}

// Hàm tính BCNN dựa vào UCLN
long long bcnn(long long a, long long b) {
    return (a / ucln(a, b)) * b; // Áp dụng công thức BCNN = a / UCLN * b
}

int main() {
    long long a, b;
    cin >> a >> b;
    cout << ucln(a, b) << " " << bcnn(a, b); // In ra UCLN và BCNN của a và b
    return 0;
}
