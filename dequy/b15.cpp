#include <bits/stdc++.h>
using namespace std;

int firstDigit(long long n) {
    if (n < 10) return n; // Nếu n chỉ còn 1 chữ số thì trả về luôn
    return firstDigit(n / 10); // Gọi đệ quy với n đã chia 10
}

int main() {
    long long n;
    cin >> n;
    cout << firstDigit(n);
    return 0;
}
