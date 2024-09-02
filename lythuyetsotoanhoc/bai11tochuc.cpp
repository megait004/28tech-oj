#include<iostream>
#include<cmath>
using namespace std;

int smallestPrimeFactor(int n) {
    if (n == 1) return 1; // ước số nguyên tố nhỏ nhất của 1 là 1
    if (n % 2 == 0) return 2; // ước số nguyên tố nhỏ nhất của các số chẵn là 2

    for (int i = 2; i <= sqrt(n); i ++) {
        if (n % i == 0) {
            return i; // trả về ước số nguyên tố nhỏ nhất tìm được
        }
    }

    return n; // nếu không tìm được ước số nguyên tố nhỏ hơn thì chính nó là số nguyên tố
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << smallestPrimeFactor(i) << endl;
    }
    return 0;
}
