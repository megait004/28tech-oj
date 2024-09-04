#include<iostream>
#include<cmath>
using namespace std;

bool isNotPrime(int n) {
    if (n < 2) return true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return true;
        }
    }
    return false;
}

int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int primeFactorSum(int n) {
    int sum = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            sum += sumOfDigits(i);
            n /= i;
        }
    }
    if (n > 1) {  // Trường hợp n còn lại là số nguyên tố lớn hơn 1
        sum += sumOfDigits(n);
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    if (isNotPrime(n) && sumOfDigits(n) == primeFactorSum(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
