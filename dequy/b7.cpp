#include<iostream>
using namespace std;

int gt(int n) {
    if (n <= 1) return 1;
    return n * gt(n - 1); // Tính giai thừa của n
}

int toHop(int n, int k) {
    if (k == 0 || k == n) return 1; // Điều kiện cơ sở: C(n, 0) = C(n, n) = 1
    else 
        return gt(n) / (gt(k) * gt(n - k)); // Áp dụng công thức C(n, k) = n! / (k! * (n - k)!)
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << toHop(n, k); // In ra kết quả tổ hợp chập K của N
    return 0;
}
