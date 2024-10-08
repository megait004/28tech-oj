#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int dem = 0;  // Biến đếm số dãy con có tổng là số nguyên tố
    
    // Tính tổng dãy con bắt đầu từ mỗi phần tử i
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += v[j];
            // Kiểm tra nếu tổng là số nguyên tố
            if (isPrime(sum)) {
                dem++;
            }
        }
    }

    cout << dem << endl;

    return 0;
}
